#include <iostream>
#include <string>


auto ask(std::string const prompt) -> int
{
	if(not prompt.empty())
	{
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

auto prostokat(int d, int w) -> void
{
	while(d == 0) 
	{
		std::cout <<"dlugosc nie moze byc rowna 0\n";
		d = ask("Podaj dlugosc ");
	}
	
	while(w == 0) 
	{
		std::cout <<"wysokosc nie moze byc rowna 0\n";
		w = ask("Podaj wysokosc ");
	}
	
	for(auto i = 1; i <= w; i++)
	{
		for(auto j = 1; j <= d; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return;
}

auto main() -> int
{
	auto dlugosc  = ask("Podaj dlugosc ");
	auto wysokosc = ask("Podaj wysokosc ");
	prostokat(dlugosc, wysokosc);
	
	return 0;
}
