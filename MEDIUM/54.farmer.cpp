#include <iostream>
using namespace std;

int totalLegs(int chickens, int cows, int pigs) {
    int totalChickenLegs = chickens * 2;
    int totalCowLegs = cows * 4;
    int totalPigLegs = pigs * 4;

    return totalChickenLegs + totalCowLegs + totalPigLegs;
}

int main() {
    // Test cases
    cout << "(M) Farmer: " << totalLegs(2, 3, 5) << endl; // Expected: 36
    cout << "Control: " << totalLegs(1, 2, 3) << endl;    // Expected: 22
    cout << "medium: " << totalLegs(5, 2, 8) << endl;     // Expected: 50

    return 0;
}
