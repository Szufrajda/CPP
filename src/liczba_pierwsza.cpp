// Zad.4 Liczba pierwsza //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
int n;
std::cout<<prompt<<"\n";
std::cin >> n;
return n;
}
auto pierwsza(int a)-> int
{

int a;
a=pytanie("Podaj liczbę: ");
for (int a=2;
std::cout<<a<<"\n";
a++; 
}
return 0;
}

    for(int i=0; i<test; i++)
    {
        cin >> liczba;
        for (int i=2; i<=liczba; i++){
            if (liczba%i==0){
                if (i==liczba) cout<<"TAK"<<endl
                else cout<<"NIE"<<endl;
                break;
            }
        }

