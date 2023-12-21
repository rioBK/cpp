#include <iostream>

int main() {
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Displaying address using arrays
    std::cout << "Displaying address using arrays:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "&arr[" << i << "] = " << &arr[i] << std::endl;
    }

    // Displaying address using pointers
    int* ptr = arr;
    std::cout << "Displaying address using pointers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "ptr + " << i << " = " << (ptr + i) << std::endl;
    }

    return 0;
}

