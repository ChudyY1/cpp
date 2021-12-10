#include <iostream>
#include <string>
#include <cmath>

auto liczba_pierwsza(int a) -> std::string
{
    auto czy_pierwsza = int{0};
    
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0) czy_pierwsza++;
    }

    if((czy_pierwsza == 0) && (a != 1)) 
    {
		return  std::to_string(a) + " ";
    }                             
} 

auto main() -> int
{     
	auto liczby = std::string{};
	
	for(auto i = 2; i<21; ++i)
	{
		liczby = liczby + liczba_pierwsza(i);   
	}

	std::cout << liczby << std::endl;
	std::cout << liczby << std::endl;
	
    return 0;
}



