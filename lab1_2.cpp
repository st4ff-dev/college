#include <iostream>


int main() {
    std::string name;
    
    std::cout << "Введите свое Имя: ";
    std::cin >> name;

    std::cout << "Привет, " << name << '!' << std::endl;
    return 0;
}
