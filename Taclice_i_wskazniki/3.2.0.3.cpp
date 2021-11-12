#include <iostream>
#include <string>

auto swap1(int *w1, int *w2) -> void
{
	int temp;
	temp = *w1;
	*w1 = *w2;
	*w2 = temp;
}

auto main() -> int
{
	auto a = 1;
	auto b = 2;
	std::cout << a << " " << b << "\n";
	swap1(&a, &b);
	std::cout << a << " " << b << "\n";
	
	return 0;
}
