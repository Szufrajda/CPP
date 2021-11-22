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
        if (x == true) {
            std::cout << "Liczba " << a << " jest liczbą pierwszą";
            return a;
        } else {
            std::cout << "Liczba " << a << " nie jest liczbą pierwszą";
            return 0;
        }
    }
}
auto main() -> int
{
    int a, b;
    a = pytanie("Podaj liczbę: ");
    b = pierwsza(a);
    std::cout << b;
    return 0;
    {
        int j = 0;
        while (j == b) {
            std::cout << "Ilość wykonanych iteracja: " << j;
            j++;
            return 0;
        }
    }
