/*'Write a C++ program to throw multiple exceptions and define multiple catch statement. Input : int x = 0.00001 Output : The number is too small Accept only positive integer.', '*/
Certainly! Here's a C++ program that throws multiple exceptions and defines multiple catch statements based on the given conditions:

```cpp
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int x;

        // Get input from the user
        cout << "Enter a positive integer: ";
        cin >> x;

        if (x <= 0) {
            // Throw an exception if the number is not positive
            throw invalid_argument("The number is not positive");
        }

        if (x < 1) {
            // Throw an exception if the number is too small
            throw out_of_range("The number is too small");
        }

        // Display the entered positive integer
        cout << "You entered: " << x << endl;

    } catch (const invalid_argument& e) {
        // Catch invalid argument exception
        cerr << "Error: " << e.what() << endl;
    } catch (const out_of_range& e) {
        // Catch out-of-range exception
        cerr << "Error: " << e.what() << endl;
    } catch (...) {
        // Catch any other unexpected exception
        cerr << "An unexpected error occurred." << endl;
    }

    return 0;
}
```
/*
Explanation:

1. The program uses the `try` block to handle exceptions.

2. The user is prompted to enter a positive integer.

3. Two conditions are checked:
   - If the entered number is not positive, an `invalid_argument` exception is thrown.
   - If the entered number is less than 1, an `out_of_range` exception is thrown.

4. The program defines multiple `catch` statements to handle different types of exceptions:
   - `invalid_argument` is caught and an error message is displayed.
   - `out_of_range` is caught and an error message is displayed.
   - The last `catch (...)` catches any other unexpected exceptions and displays a generic error message.*/
