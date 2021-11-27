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
	auto tab = reinterpret_cast<char*>(a);
	
	for(auto i = size_t{0}; i < s; ++i)
	{
		std::cout << tab[i];
	} 
	std::cout << std::endl;
}

auto fpprint(void* a, size_t size_tab, size_t element, void (*fp)(void*, size_t)) -> void
{
	if(element == 4)
		(*fp)(a,size_tab);
	else
	{
		fp = &print_str;
		(*fp)(a,size_tab);
	}
}

auto main() -> int
{
	int tab[3] = {4,1,0};
	char str[] = "placek";
	fpprint(tab, sizeof(tab)/sizeof(tab[0]), sizeof(tab[0]), &print_int);
	fpprint(str, sizeof(str)/sizeof(str[0]), sizeof(str[0]), &print_int);
	return 0;
}
