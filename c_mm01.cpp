#include <iostream>
#include <iomanip> // Include the iomanip library

int main() {
    int uBottom, lBottom, h;
    double area;
    std::cin >> uBottom >> lBottom >> h;
    area = ((uBottom + lBottom) * h) / 2.0;
    std::cout << std::fixed << std::setprecision(1); // Set fixed point notation and precision to 1
    std::cout << "Trapezoid area:" << area << std::endl;
    return 0;
}
