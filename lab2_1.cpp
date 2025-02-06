#include <iostream>
#include <iomanip>

int main() {
    char symbol;
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    std::cout << "Символ: " << symbol << std::endl;
    std::cout << "ASCII (десятковый): " << static_cast<int>(symbol) << std::endl;
    std::cout << "ASCII (шестнадцатеричный): " << std::hex << std::uppercase << static_cast<int>(symbol) << std::endl;

    return 0;
}