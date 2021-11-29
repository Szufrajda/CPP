#include <algorithm>
#include <iostream>
#include <string>

auto amin(int a[], int n) -> int
{
    n = 10;
    int najmniejsza;
    for (int i = 1; i < n; ++i) {
        if (a[0] > a[i])
            a[0] = a[i];
    }
    najmniejsza = a[0];
    std::cout << "Najmniejsza liczba to: \n" << najmniejsza << "\n";
    return najmniejsza;
}
auto main() -> int
{
    int tab[10]{42, 9, -1, 18, 59, 3, 101, 32, 72, 12};
    amin(tab, 1);
    return 0;
}
