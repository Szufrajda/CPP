// Zad.2 Mnożenie //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
int n;
std::cout << prompt << "\n";
std::cin >> n;
return n;
}
auto mnozenie (int a, int b) ->int
{
int c;
c=a*b;
return c;
}

auto main() -> int

{
int  a,b,c;
a = pytanie("Podaj pierwszą liczbę: ");
b = pytanie("Podaj drugą liczbę: "); 
c = mnozenie(a,b);
std::cout <<"wynik: "<<c; 
return 0;
} 



