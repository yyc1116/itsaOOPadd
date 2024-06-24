#include <iostream>
#include <vector>
#include <algorithm>

// Function to sort scores in descending order
bool compareScores(int a, int b) {
    return a > b;
}

int main() {
    int n;
    std::cin >> n;
    if(n < 2 || n > 50) {
        std::cerr << "The number of scores should be between 2 and 50." << std::endl;
        return 1;
    }

    std::vector<int> scores(n);

    for(int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    std::sort(scores.begin(), scores.end(), compareScores);

    for(int i = 0; i < n; i++) {
        std::cout << i+1 << " " << scores[i] << std::endl;
    }
    //std::cout << std::endl;

    return 0;
}
