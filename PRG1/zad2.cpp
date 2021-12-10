#include <iostream>
#include <string>

auto main() -> int
{     
	auto imie = std::string{"Maks"};
	auto waga = double{65};
	auto wzrost = int{182};
	
	std::cout << "Imie: " << imie << "\n\n";
	std::cout << "Waga: " << waga << "\n\n";
	std::cout << "Wzrost: " << wzrost << "\n\n";
	
	//uzycie std::endl
	std::cout << "Imie: " << imie << std::endl << std::endl;
	std::cout << "Waga: " << waga << std::endl << std::endl;
	std::cout << "Wzrost: " << wzrost << std::endl << std::endl;
    return 0;
}
