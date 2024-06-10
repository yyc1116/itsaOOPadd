#include <iostream>
#include <iomanip>

int main() {
    double height;
    int gender;
    
    while (std::cin >> height >> gender) {
        double standard_weight;
        if (gender == 1) {
            // 男生標準體重公式
            standard_weight = (height - 80) * 0.7;
        } else if (gender == 2) {
            // 女生標準體重公式
            standard_weight = (height - 70) * 0.6;
        } else {
            std::cerr << "Invalid gender input. Please enter 1 for male or 2 for female." << std::endl;
            continue;
        }
        // 設定輸出格式為浮點數取至小數點後一位
        std::cout << std::fixed << std::setprecision(1) << standard_weight << std::endl;
    }

    return 0;
}
