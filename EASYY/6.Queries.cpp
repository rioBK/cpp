#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N = 5;
    int arr[] = {3, 7, 8, 1, 33};
    int Q = 4;
    int queries[4][3] = {{1}, {2, 8}, {3, 2, 4}, {2, 1}};

    for (int i = 0; i < Q; ++i) {
        int type = queries[i][0];

        if (type == 1) {
            reverse(arr, arr + N);
        } else if (type == 2) {
            int x = queries[i][1];
            cout << find(arr, arr + N, x) - arr + 1 << " ";
        } else if (type == 3) {
            swap(arr[queries[i][1] - 1], arr[queries[i][2] - 1]);
        }
    }

    return 0;
}

