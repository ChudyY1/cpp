#include <iostream>


auto is_even(int liczba) -> bool
{
	if(liczba % 2 == 0)
		return true;
	else
		return false;
}

auto main() -> int
{     
	std::cout << is_even(2) << "\n";
	
    return 0;
}
