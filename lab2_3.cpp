#include <iostream>
#include <iomanip>

int main() {
    int number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    std::cout << "Число четное? " << (number % 2 == 0 ? "ТАК" : "НІ") << std::endl;
    std::cout << "Делится на 8? " << (number % 8 == 0 ? "ТАК" : "НІ") << std::endl;
    std::cout << "Делится на 16? " << (number % 16 == 0 ? "ТАК" : "НІ") << std::endl;

    std::cout << "Восьмеричное представление: " << std::oct << number << std::endl;
    std::cout << "Шестнадцатеричное представление: " << std::hex << std::uppercase << number << std::endl;

    return 0;
}