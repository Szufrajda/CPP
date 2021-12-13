#include <algorithm>
#include <iostream>
#include <string>

auto sort(int a, int n) -> void
{
    int tab[10]{42, 9, -1, 18, 59, 3, 101, 32, 72, 12};
    do {
        n = 0;
        for (int i = 0; i < 9; i++) {
            if (tab[i] > tab[i + 1]) {
                n          = n + 1;
                a          = tab[i];
                tab[i]     = tab[i + 1];
                tab[i + 1] = a;
            }
        }
    } while (n != 0);
    for (int j = 0; j <= 9; j++) {
        std::cout << tab[j] << " ";
    }
    return 0;
}
