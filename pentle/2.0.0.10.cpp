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

auto silnia(int a) -> long int
{
	long int silnia = 1;
	auto i = 1;
	do
	{
		silnia*=i;
		i++;
	}
	while(i <= a);
	
	return silnia;
}

auto main() -> int
{
	auto a = ask("Podaj liczbe ");
	std::cout << silnia(a) << "\n";
	
	return 0;
}
