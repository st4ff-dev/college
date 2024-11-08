#include <iostream>

int main() {
    int p, i, t, r;

    std::cout << "Введите сумму: ";
    std::cin >> p;

    std::cout << "Введите период займа: ";
    std::cin >> t;
    
    std::cout << "Введите процент ставки: ";
    std::cin >> r;

    i = (p * t * r) / 100;

    std::cout << "float: " << i << std::endl;
    std::cout << "int: " << (int) i << std::endl;

    return 0;
}