#include <iostream>

auto funkcja(void *a, size_t n) -> bool
{
	auto tab = reinterpret_cast<int*>(a);
	for(auto i = size_t{0}; i < n; ++i)
	{
		if(tab[i] != 1)
		{
			return false;
		}
	}
	
	return true;
}

auto all(void *a, size_t size, bool (*fp)(void*, size_t)) -> bool
{
	if( (*fp)(a, size) == true)
		return true;
	else
		return false;
}

auto main() -> int
{
	int tab[3] = {1,1,1};
	std::cout << all(tab, 3, &funkcja) << "\n";
	
	return 0;
}
