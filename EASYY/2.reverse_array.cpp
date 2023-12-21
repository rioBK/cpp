#include <iostream>

using namespace std;

// Function to reverse an integer array
void Reverse(int A[], int n) {
    // Swap elements from the beginning and end of the array
    for (int i = 0; i < n / 2; i++) {
        // Swap A[i] with A[n-i-1]
        int temp = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = temp;
    }
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Display original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Reverse the array using the Reverse function
    Reverse(myArray, size);

    // Display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}

