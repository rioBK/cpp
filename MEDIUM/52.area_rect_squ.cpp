#include <iostream>
using namespace std;

class AreaCalculator {
public:
    void calculateArea(int side) {
        cout << "Area of square: " << side * side << endl;
    }

    void calculateArea(int length, int breadth) {
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};

int main() {
    int side, length, breadth;

    cout << "Enter the side of the square: ";
    cin >> side;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;

    AreaCalculator obj;

    // Calculate and print the area of the square and rectangle
    obj.calculateArea(side);
    obj.calculateArea(length, breadth);

    return 0;
}
