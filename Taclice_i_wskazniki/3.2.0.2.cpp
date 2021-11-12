#include <iostream>
#include <string>

auto print(std::string *w) -> void
{
	std::cout << w << " = " << *w;
}
auto main() -> int
{
	auto napis = std::string{"Hello, World!\n"};
	print(&napis);
	return 0;
}
