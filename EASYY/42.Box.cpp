#include <iostream>
using namespace std;

class Box {
public:
    int length;  // Public variable

    // Function to set the width (private variable)
    void setWidth(int w) {
        width = w;
    }

    // Function to get the width (private variable)
    int getWidth() {
        return width;
    }

private:
    int width;  // Private variable
};

int main() {
    Box myBox;

    // Input: Enter the Length of box
    cout << "Enter the Length of box: ";
    cin >> myBox.length;

    // Input: Enter the Width of box
    int width;
    cout << "Enter the Width of box: ";
    cin >> width;

    // Set the width using setWidth() function
    myBox.setWidth(width);

    // Output: Length of box and Width of box
    cout << "Length of box: " << myBox.length << endl;
    cout << "Width of box: " << myBox.getWidth() << endl;

    return 0;
}

