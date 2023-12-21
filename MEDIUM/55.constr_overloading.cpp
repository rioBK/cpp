#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    float area;

    // Constructor for Circle
    Shape(float radius) {
        area = 3.14159 * radius * radius;
    }

    // Constructor for Rectangle
    Shape(float length, float breadth) {
        area = length * breadth;
    }

    // Constructor for Triangle
    Shape(float base, float height, char triangle) {
        area = 0.5 * base * height;
    }
};

int main() {
    float radius, length, breadth, base, height;

    // Input for Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    Shape circle(radius);
    cout << "Area of Circle: " << circle.area << endl;

    // Input for Rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    Shape rectangle(length, breadth);
    cout << "Area of Rectangle: " << rectangle.area << endl;

    // Input for Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Shape triangle(base, height, 'T');
    cout << "Area of Triangle: " << triangle.area << endl;

    return 0;
}
