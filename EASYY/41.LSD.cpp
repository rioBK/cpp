#include <iostream>

using namespace std;

int main() {
    int number;

    // Input: Enter an integer number
    cout << "Enter an integer number: ";
    cin >> number;

    // Extract least significant digit
    int leastSignificantDigit = number % 10;

    // Remove least significant digit and extract the next least significant digit
    number /= 10;
    int nextLeastSignificantDigit = number % 10;

    // Output the results
    cout << "The least significant digit is: " << leastSignificantDigit << endl;
    cout << "The next least significant digit is: " << nextLeastSignificantDigit << endl;

    return 0;
}

