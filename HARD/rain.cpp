#include <iostream>
#include <algorithm>

using namespace std;

int trap(int height[], int n) {
    if (n <= 2) {
        return 0; // Cannot trap water with less than 3 blocks
    }

    int leftMax[n];
    int rightMax[n];

    // Calculate the maximum height to the left of each bar
    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Calculate the maximum height to the right of each bar
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int totalWater = 0;

    // Calculate the trapped water at each index
    for (int i = 0; i < n; ++i) {
        int minHeight = min(leftMax[i], rightMax[i]);
        totalWater += max(0, minHeight - height[i]);
    }

    return totalWater;
}

int main() {
    int elevationMap[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(elevationMap) / sizeof(elevationMap[0]);

    int result = trap(elevationMap, n);

    cout << "Total volume of trapped water: " << result << " units" << endl;

    return 0;
}
/*
'Given an integer array A[] consisting of N non-negative integers representing an elevation map, 
where the width of each bar is 1. The task is to compute the total volume of water that can be trapped after rain. 
Examples : Input: A[] = { 0 , 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 } Output: 6 Explanation: <img src="images/rain.jpg" /> 
The rain water trapped is represented by the blue region. Trap 1 unit of water between the first and third block Trap 4 units of water 
between the second and third blocks. Therefore, the total volume of water is - 1 + 4 + 1 = 6 units. *-/
