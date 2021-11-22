// Zad.5 Suma liczb pierwszych //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
    int n;
    std::cout << prompt << "\n";
    std::cin >> n;
    return n;
}
auto pierwsza(int a) -> int
{
    bool x = true;
    if (a == 0 or a == 1) {
        return 0;
    } else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                x = false;
            }
        }
    }
    if (x == true) {
        return a;
    } else {
        return 0;
    }
}
auto main() -> int
{
    int a;
    int b = 0;
    a     = pytanie("Podaj liczbę: ");
    while (a > 0) {
        if (pierwsza(a) > 0) {
            b = b + a;
            a--;
        } else {
            a--;
        }
    }
    std::cout << "Suma liczb pierwszych " << b;
    return 0;
}
