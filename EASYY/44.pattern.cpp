#include <iostream>

using namespace std;

int main() {
    int rows;

    // Input: Number of rows
    cout << "Number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        int value = 2;

        // Print each value in the row
        for (int j = 1; j <= i; j++) {
            cout << value << "\t";
            value *= value; // Calculate the square of the current value
        }

        cout << endl;
    }

    return 0;
}

