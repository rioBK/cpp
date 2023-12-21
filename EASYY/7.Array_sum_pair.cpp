#include<iostream>
using namespace std;

bool sumpair(int arr[], int n, int x) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == x) {
                cout << "Yes, the pair is " << arr[i] << " + " << arr[j] << " = " << x;
                cout << endl;
                return true;
            }
        }
    }
    cout << "No";
    return false;
}

int main() {
    int x = 5;
    int n = 4;
    int array[n] = {1, 2, 3, 4};

    // Calling sumpair function
    cout << sumpair(array, n, x);

    return 0;
}

