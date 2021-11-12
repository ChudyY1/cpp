#include <iostream>
#include <string>
#include <array>

auto amax(int a[], int n) -> int
{
	int maks = a[0];
	for(auto i=1;i<n;i++)
	{
		if(a[i] > maks)
		{
			maks = a[i];
		}
	}
	return maks;
}

auto main() -> int
{
	std::array <int, 10> tab {3,4,6,7,8,9,10,-4,3,1};
	std::cout << amax(tab.data(), tab.size()) << "\n";
	
	return 0;
}
