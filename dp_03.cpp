#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int W, vector<int> weights, vector<int> values, int n) {
    vector<vector<int> > dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int N;
    cin >> N;

    vector<int> weights(N);
    vector<int> values(N);

    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }

    int W;
    cin >> W;

    int max_value = knapsack(W, weights, values, N);
    cout << max_value << endl;

    return 0;
}
