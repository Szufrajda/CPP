#include <iostream>
#include <string>
auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto main() -> int
{
    int a;
    int b = 1;
    int i = 1;
    int n = 1;
    a     = pytanie("Podaj wymiar trójkąta: ");
    for (a = 0; a <= b; a++) {
        for (int i = b - 1; i >= a; i++) {
            std::cout << "*";
        }
    }
    for (i = 0; i <= a; i--) {
        std::cout << " ";
    }
    for (int x = 0; x <= n; x++) {
        std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}
