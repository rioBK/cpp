#include<iostream>
using namespace std;

int sumD(int arr[][2], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        // Add the diagonal element (arr[i][i]) to the sum
        sum += arr[i][i];
    }
    return sum;
}

int main() {
    const int r = 2, c = 2;
    int array[r][c] = {{2, 3},
                       {2, 4}};

    // Calling sumD function
    int s = sumD(array, r, c);
    cout << "Sum of diagonal elements: " << s;

    return 0;
}

