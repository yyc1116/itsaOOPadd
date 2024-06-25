#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

// Comparator function to sort pairs by the first element in descending order
bool compare(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.first > b.first;
}

int main() {
    std::vector<int> numbers;
    int input;

    //std::cout << "Enter numbers (end input with -999):" << std::endl;

    while (numbers.size() < 50) {
        std::cin >> input;
        if (input == -999) {
            break;
        }
        numbers.push_back(input);
    }

    // Count the occurrences of each number
    std::map<int, int> countMap;
    for (int number : numbers) {
        countMap[number]++;
    }

    // Move the map data to a vector to sort it
    std::vector<std::pair<int, int>> countVector(countMap.begin(), countMap.end());
    std::sort(countVector.begin(), countVector.end(), compare);

    
    //std::cout << "Number Count" << std::endl;
    for (const auto &entry : countVector) {
        std::cout << entry.first << " " << entry.second << std::endl;
    }

    return 0;
}
