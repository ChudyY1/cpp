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

auto relacja(int a, int b, int c, int d, int e, int f) -> void
{
	int tab[5] = {b,c,d,e,f};
	for(auto i=0; i<5; i++)
	{
		if(a == tab[i])
		{
			std::cout << a << " == " << tab[i] <<"\n";
		}
		else if(a > tab[i]) 
		{
			std::cout << a << " > " << tab[i] << "\n";
		}
		else
			std::cout << a << " < " << tab[i] << "\n";
	}
}
auto main() -> int
{
	auto a = ask("podaj liczbe ");
	auto b = ask("podaj liczbe ");
	auto c = ask("podaj liczbe ");
	auto d = ask("podaj liczbe ");
	auto e = ask("podaj liczbe ");
	auto f = ask("podaj liczbe ");
	relacja(a, b, c, d, e, f);
	 
	return 0;
}
