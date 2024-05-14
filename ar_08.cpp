#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Function to find the maximum sum of consecutive subsequence
int maxConsecutiveSum(const vector<int>& nums) {
    int maxSum = 0;
    int n = nums.size();
    // Loop through all possible subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            // Calculate sum of current subarray
            for (int k = i; k <= j; k++) {
                sum += nums[k];
            }
            // Update maxSum if current sum is greater
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int main() {
    // Input
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<int> nums;
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    // Output
    int result = maxConsecutiveSum(nums);
    cout << result << endl;

    return 0;
}
