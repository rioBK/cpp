'Write a program to illustrate division by zero exception, get the two input from the user, use divide(int, int). Input : 5,0 Output: divide by zero.'Certainly! Here's a simple C++ program that illustrates division by zero exception:

```cpp
#include <iostream>
#include <stdexcept>

using namespace std;

// Function to perform division and handle division by zero exception
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("divide by zero");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int numerator, denominator;

    // Get input from the user
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // Attempt to perform division
        double result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    } catch (const runtime_error& e) {
        // Catch division by zero exception
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
/*```

Explanation:

1. The `divide` function takes two integers, `numerator` and `denominator`, and performs division. If the `denominator` is zero, it throws a `runtime_error` with the message "divide by zero."

2. In the `main` function, the user is prompted to enter the `numerator` and `denominator`.

3. The `divide` function is called inside a `try` block, and if a division by zero occurs, a `runtime_error` is caught in the `catch` block, and an error message is displayed.

4. If division is successful, the result is printed.

Now, if the user inputs 5 and 0, the program will catch the exception and print "Error: divide by zero."*/
