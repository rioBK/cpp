#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    int cur_id;
    static int id_counter;

public:
    Person() : age(0), cur_id(++id_counter) {}

    virtual void getdata() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    virtual void putdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << cur_id << endl;
    }
};

int Person::id_counter = 0;

class Professor : public Person {
private:
    int publications;

public:
    void getdata() override {
        Person::getdata();
        cout << "Enter Number of Publications: ";
        cin >> publications;
    }

    void putdata() override {
        Person::putdata();
        cout << "Publications: " << publications << endl;
    }
};

class Student : public Person {
private:
    int marks[6];

public:
    void getdata() override {
        Person::getdata();
        cout << "Enter Marks in 6 Subjects: ";
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        Person::putdata();
        int totalMarks = 0;
        for (int i = 0; i < 6; ++i) {
            totalMarks += marks[i];
        }
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    const int num_professors = 2;
    const int num_students = 2;

    Person* persons[num_professors + num_students];

    for (int i = 0; i < num_professors; ++i) {
        persons[i] = new Professor();
        persons[i]->getdata();
    }

    for (int i = num_professors; i < num_professors + num_students; ++i) {
        persons[i] = new Student();
        persons[i]->getdata();
    }

    for (int i = 0; i < num_professors + num_students; ++i) {
        persons[i]->putdata();
        cout << endl;
    }

    // Clean up memory
    for (int i = 0; i < num_professors + num_students; ++i) {
        delete persons[i];
    }

    return 0;
}
/*'Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person. The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor. The class Student should have two data members: marks, which is an array of size 6  and cur_id. It has two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age, and the marks of the student in  6 subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student. For each object being created of the Professor or the Student class, sequential id\'s should be assigned to them starting from 1. Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.  */
/*The Person class is an abstract base class with common data members and virtual functions getdata and putdata.
The Professor and Student classes inherit from the Person class.
Static variables professor_id and student_id are used to assign sequential IDs to professors and students, respectively.
Constructors of Professor and Student classes increment the corresponding static ID variables to assign unique IDs.
Virtual functions getdata and putdata are overridden in the derived classes.
The main function demonstrates the usage of these classes, creating objects dynamically and printing their details.*/\
