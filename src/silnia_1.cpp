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
 	a=pytanie("Podaj liczbę której silnie chcesz policzyć: ");
	{
	double silnia =1;
	for(int i=1; i<=a; i++) {
		silnia*=i;
	}
	{
		std::cout<<"Silnia liczby "<<a<<" wynosi: "<<silnia\n;
		}
	return 0;
}
	}
