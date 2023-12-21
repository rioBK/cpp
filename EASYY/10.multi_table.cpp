#include <iostream>

int main() {
    int number;

    // Get input from the user
    std::cout << "Enter a number to generate its multiplication table: ";
    std::cin >> number;

    // Display multiplication table up to 10
    std::cout << "Multiplication Table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}

