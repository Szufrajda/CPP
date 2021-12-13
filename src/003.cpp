#include <iostream>
#include <string>

auto main() -> int
{
    std::string imie_1;
    std::string imie_2;

    std::cout << "Podaj pierwsze imie: " << '\n';
    std::cin >> imie_1;
    std::cout << "Podaj drugie imie: " << '\n';
    std::cin >> imie_2;

    if (imie_1.size() > imie_2.size()) {
        std::cout << "Imie " << imie_1 << " jest dłuższe niż imie " << imie_2
                  << "!" << '\n';
    } else if (imie_1.size() < imie_2.size()) {
        std::cout << "Imie " << imie_1 << " jest krótsze niż imie " << imie_2
                  << "..." << '\n';
    } else {
        std::cout << "Imie " << imie_1 << " jest tak samo długie jak imie "
                  << imie_2 << "." << '\n';
    }
    return 0;
}
