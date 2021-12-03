#include <iostream>


auto funkcja(void* a, void* needle) -> bool 
{
	if(a == needle) 
	{
		return 1;
	}
	else
		return 0;
}

auto fpsearch(void* a, size_t size, bool (*fp)(void*, void*), void* needle) -> ssize_t
{
	auto tab = reinterpret_cast<int*>(a);
	
	for(auto i = size_t{0}; i < size; ++i)
	{
		if( (*fp)(reinterpret_cast<int*>(tab[i]), needle) == true )
		{
			return i;
		}
	}
		return 111;
}

auto main() -> int
{
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};
	
	std::cout << fpsearch(tab, sizeof(tab)/sizeof(tab[0]), &funkcja, reinterpret_cast<int*>(2)) << std::endl;
	
	return 0;
}
