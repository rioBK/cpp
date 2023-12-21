#include <iostream>
using namespace std;

class FLOAT {
private:
    float value;

public:
    FLOAT(float val) : value(val) {}

    FLOAT operator+(const FLOAT& obj) const {
        return FLOAT(value + obj.value);
    }

    FLOAT operator-(const FLOAT& obj) const {
        return FLOAT(value - obj.value);
    }

    FLOAT operator*(const FLOAT& obj) const {
        return FLOAT(value * obj.value);
    }

    FLOAT operator/(const FLOAT& obj) const {
        if (obj.value != 0)
            return FLOAT(value / obj.value);
        else {
            cout << "Error! Division by zero." << endl;
            return FLOAT(0.0);
        }
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    FLOAT F1(2.5);
    FLOAT F2(1.2);

    FLOAT addition = F1 + F2;
    FLOAT subtraction = F1 - F2;
    FLOAT multiplication = F1 * F2;
    FLOAT division = F1 / F2;

    cout << "F1 + F2 = ";
    addition.display();

    cout << "F1 - F2 = ";
    subtraction.display();

    cout << "F1 * F2 = ";
    multiplication.display();

    cout << "F1 / F2 = ";
    division.display();

    return 0;
}
