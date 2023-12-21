#include <iostream>
#include <string>

using namespace std;

// Base class RBI
class RBI {
public:
    virtual void displayGuidelines() const {
        cout << "RBI Guidelines: Implement minimum interest rate, minimum balance, maximum withdrawal, etc." << endl;
    }
};

// Class Customer representing a bank customer
class Customer {
protected:
    string name;
    int accountNumber;

public:
    Customer(const string& customerName, int accountNum) : name(customerName), accountNumber(accountNum) {}

    void displayInfo() const {
        cout << "Customer Name: " << name << ", Account Number: " << accountNumber << endl;
    }
};

// Class Account representing a bank account
class Account : public RBI {
protected:
    Customer customer;
    double balance;

public:
    Account(const Customer& customerInfo, double initialBalance) : customer(customerInfo), balance(initialBalance) {}

    virtual void displayAccountDetails() const {
        customer.displayInfo();
        cout << "Account Balance: Rs " << balance << endl;
    }

    virtual void applyInterest() {
        // Default implementation: No interest in the base class
    }
};

// Derived class SBI from RBI and Account
class SBI : public RBI, public Account {
public:
    SBI(const Customer& customerInfo, double initialBalance) : Account(customerInfo, initialBalance) {}

    void displayGuidelines() const override {
        cout << "SBI Guidelines: Follow RBI guidelines and additional rules specific to SBI." << endl;
    }

    void applyInterest() override {
        // SBI-specific interest calculation
        balance += balance * 0.04; // Assuming a 4% annual interest rate
    }
};

// Derived class ICICI from RBI and Account
class ICICI : public RBI, public Account {
public:
    ICICI(const Customer& customerInfo, double initialBalance) : Account(customerInfo, initialBalance) {}

    void displayGuidelines() const override {
        cout << "ICICI Guidelines: Follow RBI guidelines and additional rules specific to ICICI." << endl;
    }

    void applyInterest() override {
        // ICICI-specific interest calculation
        balance += balance * 0.05; // Assuming a 5% annual interest rate
    }
};

int main() {
    // Create customers
    Customer customer1("John Doe", 1001);
    Customer customer2("Alice Smith", 1002);

    // Create accounts for SBI and ICICI
    SBI sbiAccount(customer1, 5000);
    ICICI iciciAccount(customer2, 8000);

    // Display account details and apply interest
    cout << "SBI Account Details:" << endl;
    sbiAccount.displayAccountDetails();
    sbiAccount.displayGuidelines(); // Display SBI-specific guidelines
    sbiAccount.applyInterest();     // Apply interest

    cout << "\nICICI Account Details:" << endl;
    iciciAccount.displayAccountDetails();
    iciciAccount.displayGuidelines(); // Display ICICI-specific guidelines
    iciciAccount.applyInterest();     // Apply interest

    return 0;
}

