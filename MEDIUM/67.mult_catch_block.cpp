#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        cout << "Enter an integer: ";
        string input;
        cin >> input;

        int value = stoi(input);

        if (value % 2 == 0) {
            throw value;
        } else {
            throw "OddIntegerException";
        }
    } catch (const invalid_argument& e) {
        cerr << "Invalid Argument Exception: " << e.what() << endl;
    } catch (const int& evenValue) {
        cerr << "Even Integer Exception: " << evenValue << endl;
    } catch (const char* oddException) {
        cerr << "Odd Integer Exception: " << oddException << endl;
    }

    return 0;
}

