#include <iostream>
#include <string>

auto is_palindrome(std::string napis) -> bool
{
	int nie = 0;
	for(int i = 0; i < napis.size() / 2; i++)
	{
		if(napis[i] == napis[napis.size() - 1 - i])
			continue;
		else
		{
			nie++;
			break;
		}
	}
	
	if(nie == 0)
		return true;
	else
		return false;
}

auto main() -> int
{     
	std::string napis = "ala";
	std::cout << is_palindrome(napis) << "\n";
	
    return 0;
}
