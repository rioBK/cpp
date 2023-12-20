#include <iostream>

using namespace std;
int minJumps(int arr[], int n) {
    // Function to find the minimum number of jumps to reach the last index
    // or return -1 if it's not possible.

    if (n <= 1) {
        return 0; // If there's only one element or none, no jumps are needed.
    }

    if (arr[0] == 0) {
        return -1; // If the first element is 0, cannot move forward.
    }

    int maxReach = arr[0]; // The farthest index that can be reached
    int steps = arr[0];    // Number of steps we can take from the current position
    int jumps = 1;         // Initial jump from the first element

    for (int i = 1; i < n; ++i) {
        if (i == n - 1) {
            return jumps; // Reached the last index, return the number of jumps.
        }

        maxReach = max(maxReach, i + arr[i]); // Update the farthest index that can be reached.
        steps--;                              // Take a step.

        if (steps == 0) {
            jumps++; // Increment the jump count.

            if (i >= maxReach) {
                return -1; // Cannot reach the end.
            }

            steps = maxReach - i; // Update the number of steps for the next jump.
        }
    }

    return -1; // Cannot reach the end.
}


int main() {
    int arr1[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int arr2[] = {2, 3, 1, 1, 4};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Minimum jumps for arr1: " << minJumps(arr1, size1) << endl;
    cout << "Minimum jumps for arr2: " << minJumps(arr2, size2) << endl;

    return 0;
}
/*'Minimum Jumps To Reach End of an Array: Given an array of non-negative integers, A, of length N. 
You are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position. 
Return the minimum number of jumps required to reach the last index.
If it is not possible to reach the last index, return -1. 
Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9] Output: 3 
Explanation: Provided in the above image Input:  arr[] = [2, 3, 1, 1, 4] Output: 2
Explanation: Travel from 2 -> 3 -> end. */
 /*
User
 for 1st exmple
ChatGPT
Certainly, let's break down the first example:

[
1
,
3
,
5
,
8
,
9
,
2
,
6
,
7
,
6
,
8
,
9
]
[1,3,5,8,9,2,6,7,6,8,9]

Start at index 0: You start at the first element, which is 1. You can jump up to 1 position.
First jump to index 1: You jump to the second element, which is 3. Now, you can jump up to 3 positions.
Second jump to index 4: You jump to the fifth element, which is 9. Now, you can jump up to 9 positions.
Third jump to the end (index 10): You jump to the eleventh element, which is the end of the array.
So, the total number of jumps is 3 in this example.

Here's the breakdown:

Start at index 0, jump to index 1 (1 jump).
From index 1, jump to index 4 (2 jumps).
From index 4, jump to index 10 (3 jumps).*/
