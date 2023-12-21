#include <iostream>

class PrintIntegerCharacter {
public:
    // Function with (int n, char c) parameters
    void print(int n, char c) {
        std::cout << "Printing integer and character: " << n << " " << c << std::endl;
    }

    // Function with (char c, int n) parameters
    void print(char c, int n) {
        std::cout << "Printing character and integer: " << c << " " << n << std::endl;
    }
};

int main() {
    PrintIntegerCharacter printer;

    // Call the first function with (int n, char c)
    printer.print(42, 'A');

    // Call the second function with (char c, int n)
    printer.print('B', 23);

    return 0;
}

