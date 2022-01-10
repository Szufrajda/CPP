#include <iostream>
#include <string>
#include <vector>

auto average_of(std::vector<int> liczba)-> int
{
    int wynik;
    int suma;

        for (int a = 0; a <= liczba.size(); a++) {
            suma += liczba[a];
        }
        wynik = suma / liczba.size();
        return wynik;
}

auto main()-> int
{
    std::vector<int> liczba = {2,13,15};
    std::cout << "Srednia arytmetyczna liczb 2,13,15 wynosi: " << '\n';
    std::cout << average_of(liczba);
}
