#include<iostream>
using namespace std;

int add4(int arr[][3], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // Check if the last digit of the element is 4
            if (arr[i][j] % 10 == 4) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main() {
    const int r = 3, c = 3;
    int array[r][c] = {{14, 10, 12}, {12, 24, 100}, {22, 11, 4}};

    // Calling add4 function
    cout << "Sum of elements ending with 4: " << add4(array, r, c);

    return 0;
}

