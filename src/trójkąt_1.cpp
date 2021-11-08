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
a=pytanie("Podaj wymiar trójkąta: ");
while(i<=a)
{
if(i==1)
{
std::cout<<"*";
}else
{
std::cout<<"*";
for(int b=1;b<=i-1;b++)
std::cout<<"*";
}
std::cout<<"\n";
i++;
}
return 0;
}
