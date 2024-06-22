#include <iostream>

int main() {
    int i, sum = 0;
    int lower, upper;
    std::cin >> lower >> upper;
    for (i = lower; i <= upper; i++) {
        if (i % 2 == 1) sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
