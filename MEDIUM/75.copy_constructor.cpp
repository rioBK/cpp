#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Copy constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Copy constructor called." << std::endl;
    }

    // Function to display the coordinates of a point
    void display() const {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Point p1(10, 15);

    // Using the copy constructor to create a new object as a copy of p1
    Point p2 = p1;

    // Displaying the coordinates of both points
    std::cout << "Coordinates of p1: ";
    p1.display();

    std::cout << "Coordinates of p2: ";
    p2.display();

    return 0;
}

