#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];
    int totalMarks;
    float averageMarks;
    string grade;

public:
    void getMarks() {
        cout << "Please Enter the marks of five subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }

    void calculate() {
        totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += marks[i];
        }

        averageMarks = static_cast<float>(totalMarks) / 5.0;

        if (averageMarks >= 75) {
            grade = "Distinction";
        } else if (averageMarks >= 60 && averageMarks < 75) {
            grade = "First Division";
        } else if (averageMarks >= 50 && averageMarks < 60) {
            grade = "Second Division";
        } else if (averageMarks >= 40 && averageMarks < 50) {
            grade = "Third Division";
        } else {
            grade = "Fail";
        }
    }

    void display() {
        cout << "Total Marks      = " << totalMarks << endl;
        cout << "Average Marks    = " << averageMarks << endl;
        cout << "Grade            = " << grade << endl;
        cout << endl;
    }
};

int main() {
    Student students[2];

    for (int i = 0; i < 2; ++i) {
        cout << "Enter marks for Student " << i + 1 << endl;
        students[i].getMarks();
        students[i].calculate();
    }

    cout << "Results for 2 students:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].display();
    }

    return 0;
}
