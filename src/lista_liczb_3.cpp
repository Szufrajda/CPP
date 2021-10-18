
// Zad.3 Lista liczb_3 //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
int n;
std::cout<<prompt<<"\n";
std::cin >> n;
return n;
}
auto main()-> int
{
int a,b,s;
a=pytanie("Podaj pierwszą liczbę: ");
b=pytanie("Podaj drugą liczbę: ");
s=pytanie("Podaj liczbę S: ");
while (a<=b){
std::cout<<a<<"\n";
a+=s; 
}
return 0;
}

