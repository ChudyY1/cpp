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

auto suma(int limit, int dzielnik) -> int
{
	auto suma = 0;
	while(dzielnik == 0) 
	{
		std::cout << "Dzielnik nie moze byc rowny 0\n";
		ask("Podaj dzielnik ");
	}
	for(auto i=1; i<=limit; i++)
	{
		if(i%dzielnik == 0)		suma+=i;
	}
	return suma;
}
auto main() -> int
{
	auto limit 		= ask("Podaj limit ");
	auto dzielnik 	= ask("Podaj dzielnik ");
	std::cout << suma(limit, dzielnik) << "\n";
	
	return 0;
}
