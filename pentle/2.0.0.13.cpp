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

auto trojkat(int p) -> void
{
	while(p == 0) 
	{
		std::cout <<"podstawa nie moze byc rowna 0\n";
		p = ask("Podaj dlugosc ");
	}
	
	
	for(auto i = p; i > 0; i--)
	{
		for(auto j = i; j > 0; j--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return;
}

auto main() -> int
{
	auto podstawa  = ask("Podaj wielkosc podstawy ");
	trojkat(podstawa);
	
	return 0;
}
