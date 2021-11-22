#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    switch (n) {
    case 1:
        cout << "Poniedziałek"
             << "\n";
        break;
    case 2:
        cout << "Wtorek"
             << "\n";
        break;
    case 3:
        cout << "Środa"
             << "\n";
        break;
    case 4:
        cout << "Czwartek"
             << "\n";
        break;
    case 5:
        cout << "Piątek"
             << "\n";
        break;
    case 6:
        cout << "Sobota"
             << "\n";
        break;
    case 7:
        cout << "Niedziela"
             << "\n";
        break;
    }
    return 0;
}
