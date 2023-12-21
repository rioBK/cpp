#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle() : length(0), breadth(0) {}

    Rectangle(float l, float b) : length(l), breadth(b) {}

    Rectangle(float side) : length(side), breadth(side) {}

    float calculateArea() {
        return length * breadth;
    }
};

int main() {
    // Creating objects of Rectangle class using different constructors
    Rectangle rect1;               // No parameter constructor
    Rectangle rect2(3, 3);         // Two parameters constructor
    Rectangle rect3(3);            // One parameter constructor

    // Calculating areas and printing them
    cout << "Area " << rect1.calculateArea() << "," << rect2.calculateArea() << "," << rect3.calculateArea() << endl;

    return 0;
}
