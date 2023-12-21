#include <iostream>
#include <algorithm>  // for std::sort

using namespace std;

int main() {
    int n;

    // Input: Enter the number of elements to store in the array
    cout << "Input the number of elements to store in the array: ";
    cin >> n;

    // Dynamic memory allocation for the array
    int* arr = new int[n];

    // Input: Enter the elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sorting the array using pointers
    sort(arr, arr + n);

    // Output: Print the sorted elements
    cout << "Sorted elements: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}

