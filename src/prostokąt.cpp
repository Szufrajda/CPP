#include <iostream>
#include <string>
auto pytanie(std::string tekst)->int
{
int n;    
std::cout<<tekst<<"\n";
std::cin>>n;
return n;
}
auto main()->int
{
int a,b;
int i =1;
int j=1;
a=pytanie("Podaj wysokość  prostokąta: ");
b=pytanie("Podj szerokość prostokąta: ");
while(i<=a)
{
while(j<=b)
{
std::cout<<"*";
j++;
}
std::cout<<"\n";
i++;
j=1;
}
return 0;
}
