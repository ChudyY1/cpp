#include <iostream>

auto sort(void* a, void* b) -> bool
{
	if(a > b)
	{
		return true;
	}
	else 
	 return false;
}

auto fpsort(void* a, size_t n, bool (*fp)(void*, void*)) -> void
{
	auto tab = reinterpret_cast<int*>(a);
	
	for(int i = 0; i<n-1 ; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if( sort( reinterpret_cast<int*>(tab[i]), reinterpret_cast<int*>(tab[j]) ) == true )
			{
				std::swap(tab[i], tab[j]);
			}
			
		}
	}
}

auto main() -> int
{
	int tab[12] = {0,213,4,12,4,66,11,3,6,1,9,1};
	for(auto i = 0; i <12 ; ++i)
	{
		std::cout << tab[i] << " " ;
	}
	std::cout << std::endl;
	
	fpsort(tab, sizeof(tab)/sizeof(tab[0]), &sort);
	
	for(auto i = 0; i <12 ; ++i)
	{
		std::cout << tab[i] << " " ;
	}
	return 0;
}
			
