#include <iostream>


auto pierwsza(int a) -> int
{
    bool x = true;
    if (a == 0 || a == 1) {
        return 0;
    } else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0)
                x = false;
        }
    }
    if (x == true) {
        return a;
    } else {
        return 0;
    }
}

int main()
{
    int b = 1;
    while (b <= 2) {
        for (int c = 1; c <= 20; c++) {
            if (pierwsza(c) == 0)
                continue;
            std::cout << pierwsza(c) << " ";
            if (c == 19)
                std::cout << '\n';
        }
        b++;
    }
}
