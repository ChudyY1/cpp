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

auto relacja(int a, int b) -> void
{
	if(a == b)
	{
		std::cout << a << " == " << b <<"\n";
	}
	else if(a > b) 
	{
		std::cout << a << " > " << b << "\n";
	}
	else
		std::cout << a << " < " << b << "\n";
}
auto main() -> int
{
	auto a = ask("podaj liczbe ");
	auto b = ask("podaj liczbe ");
	relacja(a, b);
	 
	return 0;
}
