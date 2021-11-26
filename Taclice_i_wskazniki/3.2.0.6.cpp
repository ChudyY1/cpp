#include <iostream>
#include <string>

auto memfrob(void *tab, size_t size) -> void
{
	auto proxy = reinterpret_cast<char*>(tab);
	auto x = uint8_t{64};
	for(auto i = size_t{0}; i < size ; ++i)
	{
		proxy[i] = proxy[i] ^ x;
		x = (x ^ 42);
		proxy[i] = proxy[i] ^ x;
	}
}

auto main() -> int
{
	char str[] = "jeden";
	memfrob(str, sizeof(str)-1);		
	for(auto i = 0; i < sizeof(str); i++)
	{
		std::cout << str[i];
	}
	std::cout << "\n";
	
	return 0;
}
