#include <math.h>

#include <array>
#include <iostream>
#include <string>


auto pytanie(std::string const prompt) -> int

{
    if (not prompt.empty()) {
        std::cout << prompt;
    }

    auto value = std::string{};

    std::getline(std::cin, value);

    return std::stoi(value);
}

auto asum(std::array<int, 10> a, int n) -> int

{
    int x = 0;

    for (int i = 0; i < n; i++) {
        x = x + a[i];
    }

    return x;
}

auto main() -> int

{
    auto const n = pytanie("Ile ma być liczb? \n");

    std::array<int, 10> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};

    std::cout << "Suma wynosi: " << asum(a, n);

    return 0;
}
