#include <iostream>

using namespace std;

int main() {
    int size;

    // Input for the size of the array
    cout << "Enter the number of Celsius values: ";
    cin >> size;

    // Input for the Celsius values
    double celsiusArray[size];
    cout << "Enter " << size << " Celsius values: ";
    for (int i = 0; i < size; ++i) {
        cin >> celsiusArray[i];
    }

    // Convert Celsius to Fahrenheit and output the result
    cout << "Converted Fahrenheit values: ";
    for (int i = 0; i < size; ++i) {
        double fahrenheit = (celsiusArray[i] * 9 / 5) + 32;
        cout << fahrenheit << " ";
    }

    return 0;
}

