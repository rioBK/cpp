#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {14, 16, 87, 36, 25, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int M = 1; // Mth maximum
    int N = 3; // Nth minimum

    sort(arr, arr + size, greater<int>());

    // Finding Mth maximum number
    int MthMax = arr[M - 1];

    sort(arr, arr + size);

    // Finding Nth minimum number
    int NthMin = arr[N - 1];

    // Calculating sum and difference
    int sum = MthMax + NthMin;
    int difference = MthMax - NthMin;

    // Output
    cout << M << "st Maximum Number = " << MthMax << endl;
    cout << N << "th Minimum Number = " << NthMin << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;

    return 0;
}

