#include <iostream>
using namespace std;

void findGreatestAndSmallest(int* num1, int* num2, int* num3, int* smallest, int* biggest) {
    // Find the smallest number
    *smallest = (*num1 < *num2) ? (*num1 < *num3 ? *num1 : *num3) : (*num2 < *num3 ? *num2 : *num3);

    // Find the biggest number
    *biggest = (*num1 > *num2) ? (*num1 > *num3 ? *num1 : *num3) : (*num2 > *num3 ? *num2 : *num3);
}

int main() {
    //using namespace std;  // Include the std namespace for convenience

    int num1, num2, num3;

    // Input: Three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int smallest, biggest;

    // Find the greatest and smallest using pointers
    findGreatestAndSmallest(&num1, &num2, &num3, &smallest, &biggest);

    // Output: Smallest and Biggest
    cout << "Smallest: " << smallest << ", Biggest: " << biggest << endl;

    return 0;
}

