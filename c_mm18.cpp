#include <iostream>
#include <bitset>

std::string decimalToBinary(int n) {
    std::bitset<8> binary(n); // Create a bitset of size 8 to handle 8-bit binary representation
    return binary.to_string(); // Convert the bitset to a string
}

int main() {
    int num;
    std::cin >> num;

    std::string binary = decimalToBinary(num);
    std::cout << binary << std::endl;

    return 0;
}
