#include <iostream>

auto funkcja(void* a, size_t s) -> bool
{
	auto tab = reinterpret_cast<int*>(a);
	
	for(auto i = size_t{0}; i < s; ++i)
	{
		if( tab[i] == true)
			return true;
	}
	
	return false;
}

auto any(void *a, size_t size, bool (*fp)(void*, size_t)) -> bool
{
	if( (*fp)(a, size) == true )
		return 1;
	else
		return 0;
	
}

auto main() -> int
{
	int tab[3] = {4,1,0};
	
	std::cout << any(tab, sizeof(tab)/sizeof(int), &funkcja) << "\n";
	
	return 0;
}
