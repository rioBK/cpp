#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int minCoins(vector<int>& coins, int n, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    return dp[amount];
}

int main() {
    vector<int> coins = {10, 25, 5}; // Example: {1, 9, 6, 5}
    int n = coins.size();
    int amount;

    cout << "Enter the value for which you want to make change: ";
    cin >> amount;

    int result = minCoins(coins, n, amount);

    if (result == INT_MAX) {
        cout << "It's not possible to make change for " << amount << " with given coins." << endl;
    } else {
        cout << "Minimum number of coins needed to make change for " << amount << ": " << result << endl;
    }

    return 0;
}

