#include <iostream>
#include <string>
#include <array>

auto amin(int a[], int n) -> int
{
	int minimum = a[0];
	for(auto i=1;i<n;i++)
	{
		if(a[i] < minimum)
		{
			minimum = a[i];
		}
	}
	return minimum;
}

auto main() -> int
{
	std::array <int, 10> tab {3,4,6,7,8,9,10,-4,3,1};
	std::cout << amin(tab.data(), tab.size()) << "\n";
	
	return 0;
}
