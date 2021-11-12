#include <iostream>
#include <string>

auto get(std::string napis) -> int
{
	std::string n;
	std::cout << napis;
	std::getline(std::cin,n);
	
	return std::stoi(n);
}

auto init(int a[], int n, int start) -> void
{
	for(auto i=0; i<n; i++)
	{
		a[i] = start++;
	}
	
	for(auto i=0;i<n;i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

auto main() -> int
{
	int tab[100];
	init(tab,get("Podaj rozmiar tablicy "), get("Podaj startowa liczbe "));
	
	return 0;
}
