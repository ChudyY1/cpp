#include <iostream>
#include <string>

auto memcpy(void *slave, void *master, size_t size) -> void
{
	auto proxy = reinterpret_cast<char*>(master);
	auto copy = reinterpret_cast<char*>(slave);
	 
	for(auto i = size_t{0}; i < size; ++i)
	{
		copy[i] = proxy[i];
	}
}

auto main() -> int
{
	char liczba[] = "dwa";
	char str[] = "jeden";	
	
	memcpy(str, liczba, sizeof(liczba)-1);
	for(auto i = 0; i < sizeof(str); i++)
	{
		std::cout << str[i];
	}
	std::cout << "\n";
	
	
	int cyfry[3] = {3,2,7};
	int cyfry2[5] = {1,2,3,4,5};

	memcpy(cyfry2, cyfry, sizeof(cyfry));
	for(auto i = 0; i < 5; i++)
	{
		std::cout << cyfry2[i];
	}
	std::cout << "\n";
	
	return 0;
}
