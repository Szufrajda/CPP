// Zad.2 Lista liczb_2 //
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
int a,b,c;
a=pytanie("Podaj pierwszą liczbę: ");
b=pytanie("Podaj drugą liczbę: ");
c=pytanie("Podaj trzecią liczbę: ");
while (a!=b){
if (a%c==0){
std::cout<<a<<"\n";
}
a++; 
}
return 0;
}

