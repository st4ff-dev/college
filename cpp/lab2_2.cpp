#include <iostream>
#include <iomanip>

int main() {
    double num1, num2;
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    std::cout << std::fixed << std::setprecision(12);
    std::cout << "Сумма: " << num1 + num2 << std::endl;
    std::cout << "Разность: " << num1 - num2 << std::endl;
    std::cout << "Произведение: " << num1 * num2 << std::endl;
    if (num2 != 0)
        std::cout << "Частное: " << num1 / num2 << std::endl;
    else
        std::cout << "Частное: Деление на ноль невозможно!" << std::endl;

    return 0;
}