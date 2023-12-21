#include <iostream>
#include <cstring>

class Employee {
private:
    int empId;
    char empName[20];
    float empSalary;

public:
    // Constructor to initialize the Employee object
    Employee(int id, const char* name, float salary) : empId(id), empSalary(salary) {
        // Using this pointer to refer to the current instance
        strcpy(empName, name);
    }

    // Function to display employee details using this pointer
    void displayDetails() {
        std::cout << "Employee ID: " << this->empId << std::endl;
        std::cout << "Employee Name: " << this->empName << std::endl;
        std::cout << "Employee Salary: " << this->empSalary << std::endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp1(101, "John Doe", 50000.0);

    // Display employee details using the displayDetails function
    emp1.displayDetails();

    return 0;
}

