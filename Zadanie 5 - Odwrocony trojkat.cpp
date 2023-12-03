#include <iostream>

int main() {
    int szerokosc, wysokosc;

    std::cout << "Podaj szerokosc tryjkata: ";
    std::cin >> szerokosc;

    std::cout << "Podaj wysokosc tryjkata: ";
    std::cin >> wysokosc;

    for (int i = wysokosc; i >= 1; --i) {
        for (int j = 0; j < wysokosc - i; ++j) {
            std::cout << " ";
        }

        for (int k = 0; k < 2 * i - 1; ++k) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    return 0;
}
