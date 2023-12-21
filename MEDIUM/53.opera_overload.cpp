#include <iostream>
using namespace std;

class Add {
private:
    int num1;
    int num2;

public:
    Add() : num1(0), num2(0) {}

    Add(int n1, int n2) : num1(n1), num2(n2) {}

    // Overloading the '+' operator to perform addition
    Add operator+(const Add& obj) {
        Add temp;
        temp.num1 = num1 + obj.num1;
        temp.num2 = num2 + obj.num2;
        return temp;
    }

    void display() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Add obj1(num1, num2);
    Add obj2(10, 5);

    Add result = obj1 + obj2;
    result.display();

    return 0;
}
