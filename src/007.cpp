#include <iostream>
#include <string>

auto count_chars(std::string wyraz, char znak) -> int
{
    int x, a = 0;
    for (x = 0; x < wyraz.size(); x++) {
        if (wyraz[x] == znak) {
            a++;
        }
    }
    return a;
}
auto main() -> int
{
    std::cout << count_char("Anakonda", 'a');
    return 0;
}
