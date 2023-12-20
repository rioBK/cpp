/*'You are given three classes A, B and C. All three classes implement their own version of func. In class A, func multiplies the value passed as a parameter by 2 In class B, func multiplies the value passed as a parameter by 3 In class C, func multiplies the value passed as a parameter by 5 Write a Class D which inherits from classes A,B,C', */
#include <iostream>
using namespace std;

// Class A
class A {
public:
    int val;
    A() : val(0) {}

    void func(int x) {
        val = x * 2;
    }
};

// Class B
class B {
public:
    int val;
    B() : val(0) {}

    void func(int x) {
        val = x * 3;
    }
};

// Class C
class C {
public:
    int val;
    C() : val(0) {}

    void func(int x) {
        val = x * 5;
    }
};

// Class D inherits from A, B, and C
class D : public A, public B, public C {
public:
    void update_val(int x) {
        // Use the func method of class A (multiplies by 2)
        A::func(x);
        // Use the func method of class B (multiplies by 3)
        B::func(x);
        // Use the func method of class C (multiplies by 5)
        C::func(x);
        // Sum the values obtained from A, B, and C
        val = A::val + B::val + C::val;
    }

    void display() {
        cout << "The value is: " << val << endl;
    }
};

int main() {
    D d;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    d.update_val(x);
    d.display();

    return 0;
}
/*In this program:

Classes A, B, and C each have a member variable val and a method func that multiplies the value passed as a parameter by 2, 3, and 5, respectively.
Class D inherits from classes A, B, and C. It has a method update_val that calls the func methods of A, B, and C and then sums the values obtained. The result is stored in the member variable val.
The main function creates an object of class D, prompts the user to enter an integer, updates the value using update_val, and then displays the result using the display method.*/
