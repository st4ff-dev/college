#include <iostream>

int main() {
    int n;
    unsigned long int a;
    std::cout << "Введіть n: ";
    std::cin >> n;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                a = 1;
            else
                a = a * (i - j + 1) / j;
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
