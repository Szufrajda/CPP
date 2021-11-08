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
int a;
int i =1;
a=pytanie("Podaj wymiar kwadratu: ");
while(i<=a)
{
if(i==1 || i==a)
{
for(int b=1; b<=a; b++)
std::cout<<"*";
}else
{
std::cout<<"*";
for(int c=1;c<=a-2;c++)
std::cout<<" ";
std::cout<<"*";
}
std::cout<<"\n";
i++;
}
return 0;
}
