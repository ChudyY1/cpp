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

auto najwieksza(int a, int b, int c) -> int
{
	if((a > b) && (a > c)) 		return a;
	else if((b > a) && (b > c)) return b;
	else 						return c;
}
auto main() -> int
{
	auto a = ask("Podaj liczbe ");
	auto b = ask("Podaj liczbe ");
	auto c = ask("Podaj liczbe ");
	std::cout << najwieksza(a, b, c) << "\n";
	
	return 0;
}
