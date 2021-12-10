#include <iostream>
#include <string>

auto box_print(std::string napis, std::string* imiona , int ilosc) -> void
{
	auto najdluzsze = int{0};
	
	auto imie = std::string{};
	
	for(int i = 0; i < ilosc; ++i)
	{
		std::cout << napis;
		std::getline(std::cin, imie);
		 
		imiona[i] = imie;
		
		if(imie.size() > najdluzsze)
		{
			najdluzsze = imie.size();
		}
	}
	
	for(int i = -1; i < ilosc + 1; i++)
	{
		if(i == -1 || i == ilosc )
		{
			for(int j = 0; j < najdluzsze + 2; j++)
			{
			std::cout << "*"; 
			}
			std::cout << "\n";
		}
		else
		{
		    std::cout << "*";
			std::cout << imiona[i];
			if(imiona[i].size() < najdluzsze)
			{
				for(int j = 0; j < (najdluzsze - imiona[i].size()); j++)
				{
					std::cout << " ";
				}
			}
			std::cout << "*\n";
			//if(i != ilosc) std::cout<<
		}
	}
}

auto main() -> int
{     
	std::string napisy[5] = {};
	box_print("Podaj napis: ", napisy, 5);
    return 0;
}
