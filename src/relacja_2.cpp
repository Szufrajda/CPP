// Zad.6 Relacja między liczbami 2 //
#include <iostream>
#include <string>
auto pytanie(std::string prompt) -> int
{
    int n;
    std::cout << prompt << "\n";
    std::cin >> n;
    return n;
}
auto sprawdzanie(int a, int b) -> int
{
    if (a > b){
        std::cout << a << " > " << b<<"\n";
    }
    if (b > a){
        std::cout << b << " > " << a<<"\n";
    }
    if (a == b) {
        std::cout << a << " = " << b<<"\n";
    }
    return 0;
}
auto main(int argc, char* argv[]) -> int
{
	if (argc==0) {
	return 1;
			}
			int i=2;
			while (i<argc) {
			sprawdzanie(std::stoi(argv[1]), std::stoi(argv[i]));
			i++;
			}
	return 0;
}
