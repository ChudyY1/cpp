#include <iostream>
#include <ctime>
auto memrand(void *tab, size_t size)
{
	auto proxy = reinterpret_cast<char*>(tab);
	srand(time(NULL));
	for(auto i = size_t{0}; i < size; ++i)
	{
		proxy[i] = rand();
	}
}
auto main() -> int
{
	char str[] = "jeden";
	memrand(str, sizeof(str)-1);	
	for(auto i = 0; i < sizeof(str); i++)
	{
		std::cout << str[i] << "\n";
	}
	std::cout << "\n";
	
	
	return 0;
}
