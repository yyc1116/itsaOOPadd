#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input); // Read the entire line of input

    std::stringstream ss(input);
    std::string value;
    std::vector<int> naLocations;
    int countNA = 0;
    int index = 0;

    while (ss >> value) {
        index++;
        if (value == "NA") {
            countNA++;
            naLocations.push_back(index);
        }
    }

    // Output the number of NA values
    std::cout << countNA << std::endl;

    // Output the locations of NA values
    for (int loc : naLocations) {
        std::cout << loc-1 << std::endl;
    }

    return 0;
}
