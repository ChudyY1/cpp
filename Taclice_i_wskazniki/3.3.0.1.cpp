#include <iostream>
#include <ctime>

auto some_function(int const a) -> void
{
	std::cout << a << "\n";
}

auto call_with_random_int(void (*fp)(int const)) -> void
{	
	srand(time(NULL));
	auto liczba = rand();
	
	(*fp)(liczba);
}

auto main() -> int
{
	call_with_random_int(&some_function);
	return 0;
}
