#include <iostream>

using namespace std;

int main() {
    int sizeA, sizeB;

    // Input for Array A
    cout << "Enter the number of elements in array A: ";
    cin >> sizeA;

    int arrayA[sizeA];
    cout << "Enter " << sizeA << " elements for array A: ";
    for (int i = 0; i < sizeA; ++i) {
        cin >> arrayA[i];
    }

    // Input for Array B
    cout << "Enter the number of elements in array B: ";
    cin >> sizeB;

    int arrayB[sizeB];
    cout << "Enter " << sizeB << " elements for array B: ";
    for (int i = 0; i < sizeB; ++i) {
        cin >> arrayB[i];
    }

    // Merging Arrays A and B into Array C
    int sizeC = sizeA + sizeB;
    int arrayC[sizeC];

    for (int i = 0; i < sizeA; ++i) {
        arrayC[i] = arrayA[i];
    }

    for (int i = 0; i < sizeB; ++i) {
        arrayC[sizeA + i] = arrayB[i];
    }

    // Output the Merged Array C
    cout << "Merged array C: ";
    for (int i = 0; i < sizeC; ++i) {
        cout << arrayC[i] << " ";
    }

    return 0;
}

