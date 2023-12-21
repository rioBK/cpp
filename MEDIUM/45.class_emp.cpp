#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;

public:
    void getEmployeeDetails() {
        cout << "Enter Name of the Employee: ";
        cin>>Emp_name;
        cout << "Enter Address of the Employee: ";
        cin>> Address;
        cout << "Enter ID of the Employee: ";
        cin >> Emp_id;
        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin.ignore();
        getline(cin, Mail_id);
    }
};

class Programmer : public Employee {
private:
    float BP;
    float DA;
    float HRA;
    float PF;
    float staff_club_fund;

public:
    void getProgrammerDetails() {
        getEmployeeDetails();
        cout << "Enter the Basic Pay of the Programmer: ";
        cin >> BP;
    }

    void calculateSalary() {
        DA = 0.97 * BP;
        HRA = 0.1 * BP;
        PF = 0.12 * BP;
        staff_club_fund = 0.001 * BP;

        float gross_salary = BP + DA + HRA;
        float net_salary = BP - PF - staff_club_fund;

        cout << "\n------PAY SLIP------" << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Address: " << Address << endl;
        cout << "Mobile Number: " << Mobile_no << endl;
        cout << "E-Mail ID: " << Mail_id << endl;
        cout << "Basic Pay: " << BP << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout << "Staff Club Fund: " << staff_club_fund << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    Programmer p;
    p.getProgrammerDetails();
    p.calculateSalary();

    return 0;
}
