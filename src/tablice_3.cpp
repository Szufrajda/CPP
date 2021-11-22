#include <iostream>
#include <string>

auto pytanie(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto asum(int a[], int n) -> int
{
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}
auto main() -> int
{
    int n = pytanie("Jaki wymiar ma mieć tablica?");
    int a[1000];
    int i=0;
    int example [i];
	asum(a,n);
        std::array<int, 10> example { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12} 
	while(i<n)
	{
        std::cout << example[0] << "\n";
	i++;
	}
return 0;
}
