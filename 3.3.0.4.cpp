#include <iostream>
#include <string>

auto print_int(void* a, size_t s) -> void
{
	auto tab = reinterpret_cast<int*>(a);
	
	for(auto i = size_t{0}; i < s; ++i)
	{
		std::cout << tab[i] << std::endl;
	} 
}

auto print_str(void* a, size_t s) -> void
{
	auto tab = reinterpret_cast<std::string*>(a);
	
	for(auto i = size_t{0}; i < s; ++i)
	{
		std::cout << tab[i] << std::endl;
	} 
	std::cout << std::endl;
}

auto fpprint(void* a, size_t size_tab, void (*fp)(void*, size_t)) -> void
{
	(*fp)(a,size_tab);
}

auto main() -> int
{
	int tab[3] = {4,1,0};
	std::string str[3] = {"jeden", "dwa", "trzy"};
	fpprint(tab, sizeof(tab)/sizeof(tab[0]), &print_int);
	fpprint(str, sizeof(str)/sizeof(str[0]), &print_str);
	
	return 0;
}
