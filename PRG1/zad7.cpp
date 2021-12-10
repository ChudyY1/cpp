#include <iostream>
#include <string>

auto count_chars(std::string napis, char znak) -> int
{
	auto licznik = int{0};
	for(int i = 0; i < napis.size(); ++i)
	{
		if( napis[i] == znak )
			licznik++;
	}
	return licznik;
}

auto main() -> int
{     
	std::cout << count_chars("koto", 'o') << "\n";
    return 0;
}
