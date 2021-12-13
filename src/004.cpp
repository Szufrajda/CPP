
#include <iostream>
#include <string>

auto main() -> int
{
    int x = 0;
    int y = 5;

    std::string imie_1;
    std::string imie_2;
    std::string imie_3;
    std::string imie_4;
    std::string imie_5;


    std::cout << "Podaj pierwsze imie: " << '\n';
    std::cin >> imie_1;
    std::cout << "Podaj drugie imie: " << '\n';
    std::cin >> imie_2;
    std::cout << "Podaj trzecie imie: " << '\n';
    std::cin >> imie_3;
    std::cout << "Podaj czwarte imie: " << '\n';
    std::cin >> imie_4;
    std::cout << "Podaj piąte imie: " << '\n';
    std::cin >> imie_5;

    if (imie_1[imie_1.size() - 1] == 'a') {
        x++;
    }
    if (imie_2[imie_2.size() - 1] == 'a') {
        x++;
    }
    if (imie_3[imie_3.size() - 1] == 'a') {
        x++;
    }
    if (imie_4[imie_4.size() - 1] == 'a') {
        x++;
    }
    if (imie_5[imie_5.size() - 1] == 'a') {
        x++;
    }
    std::cout << "Imion żeńskich jest " << x << " a imion męskich " << y - x
              << '\n';
    return 0;
}
