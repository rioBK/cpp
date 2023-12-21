#include <iostream>

using namespace std;

void printReverse(const char* str) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse using a pointer
    cout << "String in reverse: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << *(str + i);
    }
    cout << endl;
}

int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    // Input: Enter a string
    cout << "Enter a string: ";
    cin.getline(input, MAX_SIZE);

    // Print the string in reverse using a pointer
    printReverse(input);

    return 0;
}

