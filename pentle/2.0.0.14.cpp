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

auto pusty_kwadrat(int p) -> void
{
	while(p < 3) 
	{
		std::cout <<"podstawa nie moze byc mniejsza od 3\n";
		p = ask("Podaj dlugosc ");
	}
	
	
	
	for(auto i = 1; i <= p; i++)
	{
		for(auto j = 1; j <= p; j++)
		{
			if(i == 1 || i == p) std::cout << "*";
			if((i > 1 && i < p) && (j == 1 || j == p )) std::cout << "*";
			if((i > 1 && i < p) && (j == 1 || j == p )) std::cout << " "; //zmienic
		}
		std::cout << "\n";
	}
	return;
}

auto main() -> int
{
	auto podstawa  = ask("Podaj wielkosc kwadratu ");
	pusty_kwadrat(podstawa);
	
	return 0;
}
