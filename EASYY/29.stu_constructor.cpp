#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Constructor with default values
    Student() : name("unknown"), age(0), address("not available") {}

    // Function to set name and age
    void setInfo(std::string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // Function to set name, age, and address
    void setInfo(std::string newName, int newAge, std::string newAddress) {
        name = newName;
        age = newAge;
        address = newAddress;
    }

    // Function to display student information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    }
};

int main() {
    // Create an array of 10 Student objects
    Student students[10];

    // Set information for each student
    students[0].setInfo("John", 20, "123 Main St");
    students[1].setInfo("Alice", 22, "456 Oak St");
    // Add more students as needed

    // Display information for all students
    for (int i = 0; i < 10; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        students[i].displayInfo();
    }

    return 0;
}

