#include <iostream>
#include <string>

auto display(std::string napis, int skok) -> void
{
	for(int i = 0; i < napis.size(); i += skok)
	{
		std::cout << napis[i];
	}
	std::cout << "\n";
}

auto main() -> int
{     
	auto napis = std::string{"kapcie"};
	display(napis, 2);
    return 0;
}
