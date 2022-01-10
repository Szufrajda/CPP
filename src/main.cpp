#include <iostream>
#include <string>

auto is_palidrome(std::string tenet) -> bool
{
    int wynik = 1;
    int a;

        for (a=1; a <= tenet.size(); a++) {
            if (tenet[tenet.size()- a] != tenet[a-1]) {
                wynik = 0;
                break;
        }
        }
            return wynik;
}

int main()
{
        std::cout << "Czy slowo TENET jest palidronem?" << '\n';
        std::cout << is_palidrome ("tenet");
}
