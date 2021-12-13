#include <iostream>
#include <string>

auto main() -> int
{
    std::string imie = "Jakub";
    double waga      = 77.46;
    float wzrost     = 182.5;

    std::cout << "Imie: " << imie << '\n' << '\n';
    std::cout << "Waga: " << waga << "kg" << '\n' << '\n';
    std::cout << "Wzrost: " << wzrost << "cm" << '\n';
    return 0;
}
