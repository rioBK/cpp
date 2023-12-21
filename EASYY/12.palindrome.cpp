#include <iostream>

using namespace std;

int main() {
    int num, originalNum, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}

