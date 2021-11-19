#include <iostream>
#include <string>
//poprawic
auto memfrob(void *tab, size_t size)
{
	auto proxy = reinterpret_cast<char*>(tab);
	auto x = uint8_t{64};
	for(auto i = size_t{0}; i < size ; ++i)
	{
		std::cout << proxy[i]<<"\n";
		proxy[i] = x;
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
	
	
	/*int cyfry[5] = {1,2,3,4,5};
	memset(cyfry, 0, sizeof(cyfry));	
	for(auto i = 0; i < 5; i++)
	{
		std::cout << cyfry[i];
	}
	std::cout << "\n";
	*/
	return 0;
}
