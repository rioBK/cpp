#include <iostream>

using namespace std;

int main() {
    int n = 5; // Adjust the value of 'n' for the desired number of terms in the series

    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 1; i <= n; ++i) {
        // Calculate factorial
        factorial *= i;

        // Calculate each term and add to the sum
        sum += factorial / i;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}

