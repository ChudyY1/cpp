#include <iostream>
#include <string>

auto main() -> int
{
	auto napis = std::string{"Hello, World!\n"};
	auto wskaznik = &napis;
	std::cout << wskaznik << "\n";
	return 0;
}
