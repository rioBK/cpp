#include <iostream>

class DivisibleBy9 {
private:
    int sum;

public:
    // Constructor
    DivisibleBy9() : sum(0) {
        std::cout << "Numbers between 100 and 200, divisible by 9:" << std::endl;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                std::cout << i << " ";
                sum += i;
            }
        }
        std::cout << std::endl;
    }

    // Destructor
    ~DivisibleBy9() {
        std::cout << "The sum: " << sum << std::endl;
    }
};

int main() {
    // Creating an object will trigger the constructor
    DivisibleBy9 divisibleBy9;

    // The destructor will be automatically called when the object goes out of scope

    return 0;
}

