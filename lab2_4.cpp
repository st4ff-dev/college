#include <iostream>
#include <iomanip>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature;
    
    std::cout << "Виберіть режим (1 - Цельсій в Фаренгейт, 2 - Фаренгейт в Цельсій): ";
    std::cin >> choice;
    std::cout << "Введіть температуру: ";
    std::cin >> temperature;

    if ((choice == 1 && temperature < -273.15) || (choice == 2 && temperature < -459.67)) {
        std::cout << "Занадто холодно для підрахунку!" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2);
        if (choice == 1)
            std::cout << "Результат: " << celsiusToFahrenheit(temperature) << " F" << std::endl;
        else if (choice == 2)
            std::cout << "Результат: " << fahrenheitToCelsius(temperature) << " C" << std::endl;
        else
            std::cout << "Неправильный выбор!" << std::endl;
    }

    return 0;
}