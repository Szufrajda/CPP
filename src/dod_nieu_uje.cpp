// Zad.6 Dodatnia, nieujemna, ujemna //
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
    int a;
    a = pytanie("Podaj liczbę: ");
    if (a > 0) {
        std::cout << ("Liczba jest dodatnia");
    } else if (a < 0) {
        std::cout << ("Liczba jest ujemna");
    } else {
        std::cout << ("Liczba jest równa zero");
    }
    return 0;
}
