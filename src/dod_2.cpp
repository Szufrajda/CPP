#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
    int n;
    std::cout << prompt << "\n";
    std::cin >> n;
    return n;
}
int main()
{
int a,b,c;
a=pytanie("Podaj miesiąc: ");
b=pytanie("Podaj rok: ");
if (a==4 || a==6 || a==8 || a==10 || a==12)
c=30;
else if (a==2)
{
bool przestepny=(b%4==0 && b%100!=0) || (b%400==0);
if (przestepny==0)
c=28;
else 
c=29;
}
else if (a==1 || a==3 || a==5 || a==7 || a==9 || a==11) 
c=31;
std::cout<<"W tym konkretnym miesiącu roku "<<b<<" jest "<<c<<" dni "<<"\n";
return 0;
}


