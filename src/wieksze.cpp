// Zad.3 Większa liczba //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
int n;
std::cout << prompt << "\n";
std::cin >> n;
return n;
}
auto wieksza_liczba(int a, int b) ->int
{
if(a>b){
std::cout <<"A jest większe od B";
return a;
}
else {
std::cout <<"B jest większe od A";
return b;
}}

auto main() -> int

{
int  a,b,c;
a = pytanie("Podaj pierwszą liczbę: ");
b = pytanie("Podaj drugą liczbę: ");  
c= wieksza_liczba(a,b);
std::cout<<c;
return 0;
} 

