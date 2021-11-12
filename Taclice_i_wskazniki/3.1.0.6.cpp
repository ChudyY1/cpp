#include <iostream>
#include <string>
#include <array>


auto get(std::string napis) -> int
{
	std::string n;
	std::cout << napis;
	std::getline(std::cin,n);
	
	return std::stoi(n);
}

auto search(int a[], int n, int needle) -> int
{
	for(auto i=0;i<n;i++)
	{
		if(a[i] == needle)
		{
			return i;
		}
	}
	
	return -1;
}

auto main() -> int
{
	std::array <int, 10> tab {3,4,6,7,8,9,10,-4,3,1};
	std::cout << search(tab.data(), tab.size(),get("Podaj wartosc ktora szukasz ")) << "\n";

	return 0;
}
