#include <iostream>
#include <string>
#include <cmath>

auto get() -> int;
auto liczba_pierwsza(int a) -> void; 

auto main() -> int
{     
    liczba_pierwsza(get());   
    
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

    if((czy_pierwsza == 0) && (a != 1))
    {
        auto suma = 0;
        for(auto i=2; i <=a; i++)
        {
           for(auto j=2; j < sqrt(i); j++)
           {

                 if((i%j == 0) && (i != 1)) suma += i; 
                    std::cout << suma << "\n"; 
           }
        }
       //std::cout << suma << "\n"; 
    }
    else  std::cout << "Liczba " << a << " nie jest liczba pierwsza.\n";
}
