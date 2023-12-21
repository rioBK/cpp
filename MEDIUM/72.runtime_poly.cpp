#include <iostream>
#include <vector>

using namespace std;

// Base class representing a role
class Role {
public:
    virtual void displayRole() const = 0;
    virtual ~Role() {}  // Virtual destructor for proper cleanup
};

// Derived classes representing different roles
class Mother : public Role {
public:
    void displayRole() const override {
        cout << "Mother" << endl;
    }
};

class Wife : public Role {
public:
    void displayRole() const override {
        cout << "Wife" << endl;
    }
};

class Daughter : public Role {
public:
    void displayRole() const override {
        cout << "Daughter" << endl;
    }
};

class Employee : public Role {
public:
    void displayRole() const override {
        cout << "Employee" << endl;
    }
};

class Son : public Role {
public:
    void displayRole() const override {
        cout << "Son" << endl;
    }
};

// Function to display roles for a person
// Function to display roles for a person
void displayRoles(const vector<Role*>& roles) {
    cout << "Roles: ";
    for (size_t i = 0; i < roles.size(); ++i) {
        roles[i]->displayRole(); // Use -> if roles contains pointers
    }
    cout << endl;
}


int main() {
    // Creating a person with multiple roles
    vector<Role*> personRoles;
    personRoles.push_back(new Mother());
    personRoles.push_back(new Wife());
    personRoles.push_back(new Daughter());
    personRoles.push_back(new Employee());
    personRoles.push_back(new Son());

    // Displaying the roles of the person
    displayRoles(personRoles);

    // Clean up memory
// Clean up memory
for (const auto& role : personRoles) {
    delete role;
}

    return 0;
}

