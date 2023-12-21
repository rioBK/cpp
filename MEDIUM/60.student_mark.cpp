#include <iostream>
using namespace std;

class Marks {
protected:
    int rollNumber;
    string name;

public:
    Marks() {
        static int count = 1;
        rollNumber = count++;
        name = "Student" + to_string(rollNumber);
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << ", Name: " << name << endl;
    }
};

class Physics : public Marks {
protected:
    int physicsMarks;

public:
    void setPhysicsMarks(int marks) {
        physicsMarks = marks;
    }

    int getPhysicsMarks() {
        return physicsMarks;
    }
};

class Chemistry : public Marks {
protected:
    int chemistryMarks;

public:
    void setChemistryMarks(int marks) {
        chemistryMarks = marks;
    }

    int getChemistryMarks() {
        return chemistryMarks;
    }
};

class Mathematics : public Marks {
protected:
    int mathMarks;

public:
    void setMathematicsMarks(int marks) {
        mathMarks = marks;
    }

    int getMathematicsMarks() {
        return mathMarks;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics physics[numStudents];
    Chemistry chemistry[numStudents];
    Mathematics mathematics[numStudents];

    // Input marks for each student
    for (int i = 0; i < numStudents; ++i) {
        int pMarks, cMarks, mMarks;
        cout << "\nEnter Physics, Chemistry and Mathematics marks for student " << i + 1 << ": ";
        cin >> pMarks >> cMarks >> mMarks;

        physics[i].setPhysicsMarks(pMarks);
        chemistry[i].setChemistryMarks(cMarks);
        mathematics[i].setMathematicsMarks(mMarks);
    }

    // Calculate total marks and average marks for each subject
    int totalPhysics = 0, totalChemistry = 0, totalMathematics = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalPhysics += physics[i].getPhysicsMarks();
        totalChemistry += chemistry[i].getChemistryMarks();
        totalMathematics += mathematics[i].getMathematicsMarks();
    }

    // Calculate average marks for each subject
    double avgPhysics = static_cast<double>(totalPhysics) / numStudents;
    double avgChemistry = static_cast<double>(totalChemistry) / numStudents;
    double avgMathematics = static_cast<double>(totalMathematics) / numStudents;

    // Display average marks for each subject
    cout << "\nAverage Marks - Physics: " << avgPhysics << ", Chemistry: " << avgChemistry << ", Mathematics: " << avgMathematics << endl;

    return 0;
}
