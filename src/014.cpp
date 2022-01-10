#include <iostream>
#include <string>
#include <vector>

struct student
{
    std::string name;
    std::string surname;
    std::vector<int> grades;
    double average_of();
};

double student::average_of()
{
    int suma;
    double wynik;

    for(int i=0; i < grades.size(); i++)
    {
        suma += grades[i];
    }
    wynik = suma / grades.size();
    return wynik;
}
int main()
{
    std::vector <int> bdb = {5,2,5};
        student pjatk {"Jakub", "Szufrajda", bdb};
        std::cout << pjatk.average_of();
}


