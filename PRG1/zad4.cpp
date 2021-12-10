#include <iostream>
#include <string>

auto get(std::string napis, std::string* imiona , int ilosc) -> void
{
	auto imie = std::string{};
	for(int i = 0; i < ilosc; ++i)
	{
		std::cout << napis;
		std::getline(std::cin, imie);
		 
		imiona[i] = imie;
	}
}

auto plec(std::string* imiona, int ilosc) -> void
{
	int meskie = 0, zenskie = 0;
	
	for(int i = 0; i < ilosc; ++i)
	{
		if(imiona[i].back() == 'a')
			zenskie++;
		else
			meskie++;
	}
	
	std::cout << "Ilosc meskich imion: " << meskie << "\n";
	std::cout << "Ilosc zenskich imion: " << zenskie << "\n";
}

auto main() -> int
{     
	std::string imiona[5] = {};
	
	get("Podaj imie: ", imiona, 5);
	plec(imiona, 5);
    return 0;
}
