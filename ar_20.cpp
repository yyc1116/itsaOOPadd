#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cctype>

// Function to check if a given word is a palindrome
bool isPalindrome(const std::string& str) {
    std::stack<char> s;
    std::queue<char> q;

    // Filter and process the input string
    for (char ch : str) {
        if (std::isalnum(ch)) { // consider only alphanumeric characters
            char lower_ch = std::tolower(ch);
            s.push(lower_ch);
            q.push(lower_ch);
        }
    }

    // Compare characters from stack and queue
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            return false;
        }
        s.pop();
        q.pop();
    }

    return true;
}

int main() {
    std::string input;
    std::getline(std::cin, input); // Read input string

    if (isPalindrome(input)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
