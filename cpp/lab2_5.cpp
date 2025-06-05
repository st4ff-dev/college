#include <iostream>

int main() {
    double score;
    std::cout << "Введіть кол-во баллів (0.0 - 9.0): ";
    std::cin >> score;

    if (score < 0.0 || score > 9.0) {
        std::cout << "Неправильная кількість пунктів!" << std::endl;
    } else if (score <= 4.4) {
        std::cout << "Незадовільна оцінка (2.0)" << std::endl;
    } else if (score <= 5.2) {
        std::cout << "Задовільний (3.0)" << std::endl;
    } else if (score <= 6.2) {
        std::cout << "Оцінка вище задовільно (3.5)" << std::endl;
    } else if (score <= 7.2) {
        std::cout << "Хороша оцінка (4.0)" << std::endl;
    } else if (score <= 8.2) {
        std::cout << "Оцінка вище добре (4.5)" << std::endl;
    } else {
        std::cout << "Дуже добре (5.0)" << std::endl;
    }

    return 0;
}