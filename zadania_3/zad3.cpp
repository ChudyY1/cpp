#include <iostream>
#include "zad3.h"

Wymierne::Wymierne(int a, int b)
	: numerator(a)
	, denominator(b)
{
	std::cout << numerator << " " << denominator <<'\n';
}

Wymierne::Wymierne(int a)
	: numerator(a)
	, denominator(1)
{}

auto main() -> int
{
	auto liczba = Wymierne(1,2);
	return 0;
}
