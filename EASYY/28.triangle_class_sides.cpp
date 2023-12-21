#include <iostream>
#include <cmath>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to calculate and print the area
    void calculateArea() {
        double s = (side1 + side2 + side3) / 2.0; // Semi-perimeter
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        std::cout << "Area of the triangle: " << area << std::endl;
    }

    // Function to calculate and print the perimeter
    void calculatePerimeter() {
        double perimeter = side1 + side2 + side3;
        std::cout << "Perimeter of the triangle: " << perimeter << std::endl;
    }
};

int main() {
    // Create a Triangle object with sides 3, 4, and 5 units
    Triangle triangle(3, 4, 5);

    // Calculate and print the area
    triangle.calculateArea();

    // Calculate and print the perimeter
    triangle.calculatePerimeter();

    return 0;
}

