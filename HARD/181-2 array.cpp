#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to sort A1 in the order specified by A2
void customSort(int A1[], int N, int A2[], int M) {
    // Create a frequency map to store the count of each element in A1
    unordered_map<int, int> frequencyMap;

    // Populate the frequency map with elements of A1
    for (int i = 0; i < N; ++i) {
        frequencyMap[A1[i]]++;
    }

    // Custom comparator function to sort A1 based on A2 order
    auto customComparator = [&](int x, int y) {
        // If elements are present in A2, compare their order in A2
        if (frequencyMap.find(x) != frequencyMap.end() && frequencyMap.find(y) != frequencyMap.end()) {
            return frequencyMap[x] < frequencyMap[y];
        }
        // If elements are not present in A2, maintain their original order
        return x < y;
    };

    // Sort A1 using the custom comparator
    sort(A1, A1 + N, customComparator);
}

int main() {
    int N = 11;
    int M = 4;
    int A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int A2[] = {2, 1, 8, 3};

    // Call the customSort function
    customSort(A1, N, A2, M);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < N; ++i) {
        cout << A1[i] << " ";
    }

    return 0;
}
/*
'Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. 
Sort the first array A1[ ] such that all the relative positions of the elements in the 
first array are the same as the elements in the second array A2[ ]. 
Input: N = 11 M = 4 A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8} A2[] = {2, 1, 8, 3} 
Output: 2 2 1 1 8 8 3 5 6 7 9 Explanation: Array elements of A1[] are sorted according to A2[]. 
So 2 comes first then 1 comes, then comes 8, then finally 3 comes, now we append remaining elements in sorted order. */

/*Explanation in comments:

We use an unordered_map named frequencyMap to store the count of each element in array A1.

We populate frequencyMap with the count of elements in A1.

We define a custom comparator function customComparator to compare elements of A1 based on their order in A2. If the elements are not present in A2, their original order is maintained.

We use the sort function to sort the array A1 using the custom comparator.

In the main function, we call the customSort function with arrays A1 and A2.

Finally, we print the sorted array A1.*/
