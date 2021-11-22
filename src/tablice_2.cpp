#include <iostream>
#include <string>

auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto iota(int a[], int n, int start) -> void
{
    for (int i = 0; i < n; i++) {
        a[i] = start++;
    }
}
auto main() -> int
{
    int n            = pytanie("Jaki wymiar ma mieć tablica?");
    auto const start = pytanie("Podaj liczbą startową: ");
    int a[1000];
    int i = 0;
    iota(a, n, start);
    while (i < n) {
        std::cout << a[i] << "\n";
        i++;
    }
    return 0;
}
