#include <iostream>
#include <cmath>
#include "zad1.h"

Punkt::Punkt(int a, int b)
{
	x = a;
	y = b;
	std::cout << "Utworzono punkt (" << x << ", " << y << ")\n";
}

Punkt::Punkt()
{}

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

auto Punkt::getXY(int a, int b) -> Punkt
{
	auto p = Punkt(a, b);
	
	return p;
}

//zad2

Prostokat::Prostokat(int a, int b, int c, int d)
{
	lewy_gorny_w.setXY(a,b);
	prawy_dolny_w.setXY(c,d);
}

Prostokat::Prostokat(Punkt const& p1, Punkt const& p2)
{
	lewy_gorny_w.setXY(p1);
	prawy_dolny_w.setXY(p2);
}

auto Prostokat::show() -> void
{
	std::cout << "Wspolrzedne prostokata to (" << lewy_gorny_w.getX() << ", " << lewy_gorny_w.getY()
			  << ", " << prawy_dolny_w.getX()  << ", " << prawy_dolny_w.getY() << ")\n";
}

auto Prostokat::pole_powierzchni() -> int
{
	int dlugosc, wysokosc;
	
	dlugosc = abs(lewy_gorny_w.getX() - prawy_dolny_w.getX());
	wysokosc = abs(lewy_gorny_w.getY() - prawy_dolny_w.getY());
	
	return dlugosc*wysokosc;
}

auto Prostokat::punkt_w_prostokacie() -> bool
{
	
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
	p1.getXY(1,1).show();
	
	//8
	//----------
	
	//9
	auto p3 = Punkt(p2);
	p3.show();
	
	//10
	//----------
	
	//zad2
	std::cout << "\nzad2\n";
	auto p4 = Punkt(1,0);
	auto p5 = Punkt(4,-3);
	
	auto prostokat1 = Prostokat( p4.getX(), p4.getY(), p5.getX(), p5.getY() );
	auto prostokat2 = Prostokat( p4, p5 );
	
	prostokat1.show();
	prostokat2.show();
	
	std::cout << "Pole= " << prostokat1.pole_powierzchni() << '\n';
	std::cout << "Pole= " << prostokat2.pole_powierzchni() << '\n';
	
	return 0;
}
