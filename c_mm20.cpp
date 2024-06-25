#include <iostream>
#include <iomanip> // 包含iomanip以使用hex等格式
#include <locale>  // 包含locale庫以使用std::toupper

int main() {
    int decimal_number;
    std::cin >> decimal_number;
    std::cout << std::uppercase << std::hex << decimal_number << std::endl;

    return 0;
}
