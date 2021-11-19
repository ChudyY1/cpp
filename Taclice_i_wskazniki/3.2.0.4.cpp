#include <iostream>
#include <string>


auto memset(void *tab, int value, int size) -> void
{
	auto proxy = reinterpret_cast<char*>(tab);
	for(auto i = size_t{0}; i < size; ++i)
	{
		proxy[i] = value;
	}
}
auto main() -> int
{
	char str[] = "jeden";
	memset(str, '-', sizeof(str)-1);		
	for(auto i = 0; i < sizeof(str); i++)
	{
		std::cout << str[i];
	}
	std::cout << "\n";
	
	
	int cyfry[5] = {1,2,3,4,5};
	memset(cyfry, 0, sizeof(cyfry));	
	for(auto i = 0; i < 5; i++)
	{
		std::cout << cyfry[i];
	}
	std::cout << "\n";
	
	return 0;
}
