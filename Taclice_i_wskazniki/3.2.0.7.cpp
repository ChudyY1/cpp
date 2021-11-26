#include <iostream>
#include <algorithm>
auto memrev(void *tab, size_t size)
{
	auto proxy = reinterpret_cast<char*>(tab);
	char temp;
	for(auto i = size_t{0}; i < size/2; ++i)
	{
		std::swap(proxy[size-i-1], proxy[i]);
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
