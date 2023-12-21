#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    try {
        int index;
        cout << "Enter an index to access the array: ";
        cin >> index;

        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds exception");
        }

        cout << "Value at index " << index << ": " << arr[index] << endl;
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}

