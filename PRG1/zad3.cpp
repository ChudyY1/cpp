#include <iostream>
#include <string>

auto get( std::string napis1, std::string napis2 ) -> void
{
	auto zmienna1 = std::string{};
	std::cout << napis1 << ": ";
	std::getline(std::cin, zmienna1);
	
	auto zmienna2 = std::string{};
	
	std::cout << napis2 << ": ";
	std::getline(std::cin, zmienna2);
	
	if( zmienna1.size() > zmienna2.size() )
	{
		std::cout << "Pierwsze imie jest dluzsze!\n";
	}
	else if( zmienna1.size() < zmienna2.size() )
		std::cout << "Drugie imie jest dluzsze...\n";
	else
		std::cout << "Imiona sa tej samej dlugosci.\n";
}

auto main() -> int
{     
	get("Podaj imie", "Podaj drugie imie");
	
    return 0;
}
