#include <iostream>
#include <string>
#include <array>

auto sort_asc(int a[], int n) -> void
{
	int temp;
	for(int i = 0; i<n-1 ; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

auto main() -> int
{
	std::array <int, 10> tab {3,4,6,7,8,9,10,-4,3,1};
	sort_asc(tab.data(), tab.size());
	
	for(auto i=0; i<10; i++)
	{
		std::cout << tab[i] << " ";
	}
	
	std::cout << "\n";
	
	return 0;
}
