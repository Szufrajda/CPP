// Zad.6 Relacja między liczbami 2 //
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
    int a, b, c, d, e;
    a = pytanie("Podaj pierwszą liczbę: ");
    b = pytanie("Podaj drugą liczbę: ");
    c = pytanie("Podaj trzecią liczbę: ");
    d = pytanie("Podaj czwartą liczbę: ");
    e = pytanie("Podaj piątą liczbę: ");

    if (a > b || a > c || a > d || a > e) {
        std::cout << a << " > " << b, c, d, e;
    }
    if (b > a || b > c || b > d || b > e) {
        std::cout << b << " > " << a, c, d, e;
    }
    if (a == b) {
        std::cout << a << " = " << b;
    }
    return 0;
}
