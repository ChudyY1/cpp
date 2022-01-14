#include <iostream>
#include "zad1.h"

Punkt::Punkt(int a, int b)
{
	x = a;
	y = b;
	std::cout << "Utworzono punkt (" << x << ", " << y << ")\n";
}

Punkt::Punkt(Punkt const& p)
{
	x = p.x;
	y = p.y;
}

Punkt::~Punkt()
{
	std::cout << "nara\n";
}

auto Punkt::show() -> void
{
	std::cout << "Wspolrzedne punktu to (" << x << ", " << y << ")\n";
}

auto Punkt::getX() -> int
{
	return x;
}

auto Punkt::getY() -> int
{
	return y;
}

auto Punkt::setXY(int a, int b) -> void
{
	x = a;
	y = b;
}

auto Punkt::setXY(Punkt p) -> void
{
	x = p.x;
	y = p.y;
}

auto getXY(int a, int b) -> Punkt
{
	auto p = Punkt(a, b);
	
	return p;
}

auto main() -> int
{
	auto p1 = Punkt{1,2};
	auto p2 = Punkt{5,3};
	
	//3
	p1.show();
	p2.show();
	
	//4
	std::cout << p1.getX() << '\n';
	std::cout << p1.getY() << '\n';
	
	//5
	p1.setXY(3,3);
	p1.show();
	
	//6
	p1.setXY(p2);
	p1.show();
	
	//7
	getXY(1,1).show();
	
	//8
	//----------
	
	//9
	auto p3 = Punkt(p2);
	p3.show();
	
	//10
	
	
	
	return 0;
}
