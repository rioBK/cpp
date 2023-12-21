#include <iostream>
#include <vector>
using namespace std;

bool isEmpty(vector<int> arr) {
    return arr.empty();
}

int main() {
    // Test cases
    vector<int> arr1 = {};            // An empty array
    vector<int> arr2 = {1, 2, 3};     // Non-empty array

    cout << "(M) isEmpty: " << (isEmpty(arr1) ? "true" : "false") << endl; // Expected: true
    cout << "Function: " << (isEmpty(arr2) ? "true" : "false") << endl;   // Expected: false

    return 0;
}
