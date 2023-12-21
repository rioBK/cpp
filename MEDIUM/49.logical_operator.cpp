#include <iostream>
using namespace std;

bool logicalAndFunction(bool a, bool b) {
    return a && b;
}

int main() {
    // Test cases
    bool result1 = logicalAndFunction(true, true);   // Expected: true
    bool result2 = logicalAndFunction(true, false);  // Expected: false
    bool result3 = logicalAndFunction(false, true);  // Expected: false
    bool result4 = logicalAndFunction(false, false); // Expected: false

    cout << "(M) Logical AND: " << result1 << endl;
    cout << "Control: " << result2 << endl;
    cout << "medium: " << result3 << endl;
    cout << "Additional Test Case: " << result4 << endl;

    return 0;
}
