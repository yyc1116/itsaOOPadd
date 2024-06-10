#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    cin >> N; // Read number of test cases

    while (N--) {
        int M;
        cin >> M; // Read the number of integers in the case

        vector<int> numbers(M);
        for (int i = 0; i < M; ++i) {
            cin >> numbers[i]; // Read each integer
        }

        // Find the minimum and maximum of the given integers
        int min_val = *min_element(numbers.begin(), numbers.end());
        int max_val = *max_element(numbers.begin(), numbers.end());

        // Calculate the GCD of min_val and max_val
        int result = gcd(min_val, max_val);

        // Output the result
        cout << result << endl;
    }

    return 0;
}
