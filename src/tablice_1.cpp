#include <iostream>
#include <string>

auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto init(int a[], int n) -> void
{
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}
auto main() -> int
{
    int n = pytanie("Jaki wymiar ma mieć tablica?");
    int a[1000];
    int i = 0;
    init(a, n);
    while (i < n) {
        std::cout << a[i] << "\n";
        i++;
    }
    return 0;
}
