#include <iostream>
using namespace std;

int footballPoints(int wins, int draws, int losses) {
    return (wins * 3) + (draws * 1) + (losses * 0);
}

int main() {
    // Test cases
    cout << "(M) Win-Lose: " << footballPoints(3, 4, 2) << endl; // Expected: 13
    cout << "Function: " << footballPoints(5, 0, 2) << endl;     // Expected: 15
    cout << "medium: " << footballPoints(0, 0, 1) << endl;       // Expected: 0

    return 0;
}
