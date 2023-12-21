#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Congratulations! You are eligible to vote." << endl;
    } else {
        int yearsLeft = 18 - age;
        cout << "Sorry, you are not eligible to vote. You need to wait for " << yearsLeft << " more years." << endl;
    }

    return 0;
}

