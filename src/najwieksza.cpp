// Zad.7 Największa liczba //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
    int n;
    std::cout << prompt << "\n";
    std::cin >> n;
    return n;
}
auto najwieksza(int a, int b, int c) -> int
{
    int d;
    if (a > b) {
        d = a;
    } else {
        d = b;
    }
    if (c > b) {
        d = c;
    } else {
        d = b;
    }
    return d;
}
auto main() -> int
{
    int a, b, c, d;
    a = pytanie("Podaj pierwszą liczbę: ");
    b = pytanie("Podaj drugą liczbę: ");
    c = pytanie("Podaj trzecią liczbę: ");
    d = najwieksza(a, b, c);

    std::cout << "Największa liczba to: " << d;
    return 0;
}
