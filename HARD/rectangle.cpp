Here's a C++ program that defines two classes, `Rectangle` and `RectangleArea`, to compute the area of a rectangle:

```cpp
#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
protected:
    int width, height;

public:
    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Display method
    void display() const {
        cout << width << " " << height << endl;
    }
};

// RectangleArea class derived from Rectangle
class RectangleArea : public Rectangle {
public:
    // Constructor
    RectangleArea(int w, int h) : Rectangle(w, h) {}

    // Read input method
    void read_input() {
        cin >> width >> height;
    }

    // Overload display method to print the area
    void display() const {
        cout << width * height << endl;
    }
};

int main() {
    // Create an object of RectangleArea class
    RectangleArea rectArea(0, 0);

    // Read input for width and height
    rectArea.read_input();

    // Display width and height
    rectArea.Rectangle::display();

    // Display area
    rectArea.display();

    return 0;
}
```
/*'You are required to compute the area of a rectangle using classes. Create two classes: 1. Rectangle The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space. 2. RectangleArea The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. The RectangleArea class should also overload the display() method to print the area  (widthxheight) of the rectangle.

Explanation:

1. The `Rectangle` class has data members `width` and `height` representing the dimensions of the rectangle. It also has a `display` method to print the width and height.

2. The `RectangleArea` class is derived from `Rectangle` and has the additional functionality to calculate and display the area. It overrides the `display` method to print the area.

3. In the `main` function, an object of the `RectangleArea` class is created.

4. The `read_input` method is called to read the values of width and height.

5. The `display` method of the base class (`Rectangle`) is called to print the width and height.

6. The overridden `display` method of the derived class (`RectangleArea`) is called to print the area (width * height).*/
