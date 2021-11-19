#include <iostream>
#include <string>
#include <cmath>
//poprawic
auto memrev(void *tab, size_t size)
{
	auto proxy = reinterpret_cast<char*>(tab);
	auto proxy2 = reinterpret_cast<char*>(tab);
	for(auto i = size_t{0}; i < size; ++i)
	{
		if(i >= sqrt(size))
			continue;
		proxy[i] = proxy2[size-i]; 
	}
}
auto main() -> int
{
	char str[] = "jeden";
	memrev(str, sizeof(str)-1);		
	for(auto i = 0; i < sizeof(str); i++)
	{
		std::cout << str[i];
	}
	std::cout << "\n";
	
	
	return 0;
}
