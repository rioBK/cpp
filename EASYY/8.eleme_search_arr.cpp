#include <iostream>

int searchElementRecursive(int arr[], int size, int x, int index = 0) {
   
    if (index == size) {
        return -1;
    }

   
    if (arr[index] == x) {
        return index; // Element found, return the index
    }

    return searchElementRecursive(arr, size, x, index + 1);
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 11;

    int result = searchElementRecursive(arr, size, x);

    if (result != -1) {
        std::cout << "Element " << x << " is present at index " << result << std::endl;
    } else {
        std::cout << "Element " << x << " is not present in the array." << std::endl;
    }

    return 0;
}

