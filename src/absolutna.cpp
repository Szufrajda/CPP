// Zad.4 Wartość absolutna //
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
    a = pytanie("Podaj pierwszą liczbę: ");
    if (a < 0) {
        b = -a;
    } else {
        b = a;
    }
    std::cout << "Wartość absolutna tej liczby to: " << b;
    return 0;
}
