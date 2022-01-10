#include <iostream>
#include <string>
#include <vector>

bool contains_all(std::vector<int>&x, std::vector<int>& y)
{
    int czy_duplikat;
    std::vector<int> right;
    for(int i = 0; i < x.size(); i++)
    {
        for(int a = 0; a < y.size(); a++)
        {
            if(x[i] == y[a])
            {
                right.push_back(y[a]);
            }
        }
    }
    if(x.size() == right.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<int> x {1,7,7,3,9,1,1,9}, y {1,3,7,9};
    if(contains_all(x,y))
    {
        std::cout << "Zawiera te same liczby";
    }
    else
    {
        std::cout << "Nie zawiera tych samych liczb";
    }
    return 0;
}
