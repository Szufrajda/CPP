// Zad.7 Suma  podzielnych //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
    int n;
    std::cout << prompt << "\n";
    std::cin >> n;
    return n;
}
auto main() -> int
{
    int a, b;
    int c = 0;
    int d = 0;
    a     = pytanie("Podaj limit: ");
    b     = pytanie("Podaj dzielnik: ");
    while (c <= a) {
        if (c % b == 0) {
            d += c;
        }
        c++;
    }
    std::cout << "Suma podzielnych to: " << d;
    return 0;
}
