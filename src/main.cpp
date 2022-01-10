#include <iostream>
#include <string>

/*
auto main()-> int
{
std::string wyraz_1;
std::string wyraz_2;
std::string wyraz_3;
std::string wyraz_4;
std::string wyraz_5;

        std::cout << "Podaj pierwszy wyraz tekstu: ";
        std::cin >> wyraz_1;

        std::cout << "Podaj drugi wyraz tekstu: ";
        std::cin >> wyraz_2;

        std::cout << "Podaj trzeci wyraz tekstu: ";
        std::cin >> wyraz_3;

        std::cout << "Podaj czwarty wyraz tekstu: ";
        std::cin >> wyraz_4;

        std::cout << "Podaj piaty wyraz tekstu: ";
        std::cin >> wyraz_5;

        std::cout << '\n';

            int a = 8;
            int i = 1;

                while (i <= a) {
                    if (i == 1 || i == a) {
                        for (int b = 1; b <= a; b++)
                        std::cout << "*";
                } else {
                std::cout << "*";
                    for (int c = 1; c <= a - 2; c++)
                    std::cout << " ";
                    std::cout << "*";
                }
        std::cout << '\n';
        i++;
    }
    return 0;
}
*/

void box_print(std::string wyraz_1, std::string wyraz_2, std::string wyraz_3, std::string wyraz_4, std::string wyraz_5)
{
    std::string tab[6] = {wyraz_1, wyraz_2,wyraz_3, wyraz_4, wyraz_5};

    int max_wyraz = 0;
    for(int i = 0; i < 5; ++i)

        if (max_wyraz < tab[i].size())
            max_wyraz = tab[i].size();

    for(int i = 0;i < max_wyraz + 4; ++i)
        std::cout << "*";

            for (int i = 0; i < 5; ++i) {
            std::cout <<"\n"<<"* ";
            std::cout << tab[i];

                for (int j = 0; j < (max_wyraz - tab[i].size());++j)
                std::cout<<" ";
                std::cout<<" *" <<"\n";
            }

            std::cout<<"\n";

            for(int i = 0; i < max_wyraz + 4; ++i) {
            std::cout << "*";
            }
}

    int main()
    {
        box_print("Hello","world","in","a","frame");
        return 0;
    }
