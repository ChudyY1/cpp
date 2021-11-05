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

auto znak(int a) -> std::string
{
	if(a == 0)		return "0\n";
	
	else if(a > 0) 	return "1\n";
	
	else 			return "-1\n";
	
		
}
auto main() -> int
{
	auto a = ask("Podaj liczbe ");
	
	std::cout << znak(a);
	
	return 0;
}
