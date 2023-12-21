#include <iostream>
#include <algorithm>  // for std::sort

using namespace std;

int main() {
    const int size = 5;  // Size of the array
    int arr[size] = {-45, 78, 23, 89, -90};

    // Order the array in non-decreasing order
    sort(arr, arr + size);

    // Output: Ordered array
    cout << "Output = {";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "}" << endl;

    return 0;
}

