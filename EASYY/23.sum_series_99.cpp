#include <iostream>

class SeriesSum {
private:
    long long sum;

public:
    // Default constructor
    SeriesSum() : sum(0) {}

    // Constructor with an integer parameter to add a term to the sum
    SeriesSum(int term) : sum(term) {}

    // Function to add a term to the sum
    void addTerm(int term) {
        sum += term;
    }

    // Function to display the sum
    void displaySum() {
        std::cout << "Sum of the series: " << sum << std::endl;
    }
};

int main() {
    // Creating a SeriesSum object and adding terms using constructor overloading
    SeriesSum series(9);
    series.addTerm(99);
    series.addTerm(999);
    series.addTerm(9999);
    series.addTerm(99999);

    // Displaying the sum
    series.displaySum();

    return 0;
}

