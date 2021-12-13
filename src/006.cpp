#include <iostream>

auto is_divisible(int a, int b) -> bool
{
    if (a % b == 0) {
        return true;
    } else {
        return false;
    }
}
auto is_even(int a, int b) -> bool
{
    if (is_divisible(a, b) == 1) {
        return true;
    } else {
        return false;
    }
}
int main()
{
    int a, b;
    std::cout << "Podaj liczbę: ";
    std::cin >> a;
    std::cout << "Podaj dzielnik: ";
    std::cin >> b;
    std::cout << is_even(a, b) << '\n';
}
