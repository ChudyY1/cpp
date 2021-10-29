#include <iostream>
#include <string>
#include <cmath>

auto get() -> int;
auto liczba_pierwsza(int a) -> void; 

auto main() -> int
{     
    auto a = get();
    liczba_pierwsza(a);   
    
    return 0;
}

auto get() -> int
{
    auto temp = std::string{};
    std::cout << "Podaj liczbe: ";
    std::getline(std::cin, temp);
    return stoi(temp);
}

auto liczba_pierwsza(int a) -> void
{
    auto czy_pierwsza = 0;
    for(auto i=2; i < sqrt(a); i++)
    {
        if(a%i == 0) czy_pierwsza++;
    }

    if((czy_pierwsza == 0) && (a != 1)) std::cout << "Liczba " << a << " jest liczba pierwsza.\n";
    else                                std::cout << "Liczba " << a << " nie jest liczba pierwsza.\n";
}
