#include <iostream>

class Bank {
public:
    // Function in the base class
    virtual int getBalance() { //virtual polymorphism ,correct function is called at runtime.
        return 0;
    }
};

class BankA : public Bank {
public:
    // Override the function for BankA
    int getBalance() override {
        return 10000;
    }
};

class BankB : public Bank {
public:
    // Override the function for BankB
    int getBalance() override {
        return 15000;
    }
};

class BankC : public Bank {
public:
    // Override the function for BankC
    int getBalance() override {
        return 20000;
    }
};

int main() {
    BankA bankA;
    BankB bankB;
    BankC bankC;

    // Call the getBalance function for each bank
    std::cout << "Balance in Bank A: Rs " << bankA.getBalance() << std::endl;
    std::cout << "Balance in Bank B: Rs " << bankB.getBalance() << std::endl;
    std::cout << "Balance in Bank C: Rs " << bankC.getBalance() << std::endl;

    return 0;
}

