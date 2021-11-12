#include <iostream>
#include <string>

auto relacja(int argc, char* argv[]) -> void
{
	auto a = std::stoi(argv[1]);
	for(auto i=2; i<argc; i++)
	{
		if(a == std::stoi(argv[i]))
		{
			std::cout << a << " == " << argv[i] <<"\n";
		}
		else if(a > std::stoi(argv[i])) 
		{
			std::cout << a << " > " << argv[i] << "\n";
		}
		else
			std::cout << a << " < " << argv[i] << "\n";
	}
}
auto main(int argc, char* argv[]) -> int
{
	
	relacja(argc,argv);
	
	return 0;
}
