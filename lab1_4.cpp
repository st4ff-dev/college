#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Введите третье число: ";
    std::cin >> c;

    int result_one = 2 * (a * b + b * c + a * c);
    int result_two = a * b * c;

    std::cout << "Площа: " << result_one << std::endl;
    std::cout << "Обʼєм: " << result_two << std::endl;

    return 0;
}
