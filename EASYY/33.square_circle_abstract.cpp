#include <iostream>
#include <cmath>

class Shape {
public:
    virtual void getInput() = 0;          // Pure virtual function for input
    virtual double calculateArea() = 0;   // Pure virtual function for area calculation
};

class Square : public Shape {
private:
    double length;

public:
    void getInput() override {
        std::cout << "Enter the length of the square: ";
        std::cin >> length;
    }

    double calculateArea() override {
        return length * length;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void getInput() override {
        std::cout << "Enter radius of the circle: ";
        std::cin >> radius;
    }

    double calculateArea() override {
        return M_PI * radius * radius; // M_PI is a constant representing Pi
    }
};

int main() {
    Square square;
    Circle circle;

    // Input and calculate area for square
    square.getInput();
    double squareArea = square.calculateArea();

    // Input and calculate area for circle
    circle.getInput();
    double circleArea = circle.calculateArea();

    // Display results
    std::cout << "Area of square: " << squareArea << std::endl;
    std::cout << "Area of circle: " << circleArea << std::endl;

    return 0;
}

