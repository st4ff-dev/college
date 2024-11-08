#include <iostream>
#include <iomanip>


int main() {
    double pi = 3.14;
    double radius;

    std::cout << "Введите радиус: ";
    std::cin >> radius;

    double result_one = pi * radius * radius;
    double result_two = 2 * pi * radius;

    std::cout << "Довжина: " << result_two << std::endl;
    std::cout << "Площа: " << std::setprecision(2) << std::fixed << result_one << std::endl;
    std::cout << "Довжина: " << result_two << std::endl;

    return 0;
}