#include <iostream>
#include <string>
#include <array>

auto asum(int a[], int n) -> int
{
	int wynik = 0;
	for(auto i=0;i<n;i++)
	{
		wynik += a[i];
	}
	return wynik;
}

auto main() -> int
{
	std::array <int, 10> suma {2,1,1,1,1,1,1,1,1,1};
	std::cout << asum(suma.data(), suma.size()) << "\n";
	
	return 0;
}
