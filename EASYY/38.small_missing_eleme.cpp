#include <iostream>
#include <algorithm>  // for std::sort

using namespace std;

int findSmallestMissingElement(int arr[], int size) {
    // Sort the array in ascending order
    sort(arr, arr + size);

    // Iterate through the sorted array to find the smallest missing element
    for (int i = 0; i < size; ++i) {
        if (arr[i] != i) {
            return i;
        }
    }

    // If no missing element is found, return the next natural number
    return size;
}

int main() {
    // Input array (sorted natural numbers)
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the smallest missing element
    int result = findSmallestMissingElement(arr, size);

    // Display the result
    cout << "The smallest missing element is: " << result << endl;

    return 0;
}

