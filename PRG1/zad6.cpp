#include <iostream>

auto is_even(bool liczba) -> bool;
auto is_dicisible(int liczba1, int liczba2) -> bool;

auto main() -> int
{     
	std::cout << is_even( is_dicisible(4,2) ) << "\n";
	
    return 0;
}

auto is_even(bool liczba) -> bool
{
	if(liczba == true)
		return true;
	else
		return false;
}

auto is_dicisible(int liczba1, int liczba2) -> bool
{
	if(liczba2 != 0 && liczba1 % liczba2 == 0 )
		return true;
	else
		return false;
}
