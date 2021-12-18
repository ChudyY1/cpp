#include <iostream>
#include <vector>


auto main() -> int
{
    auto tab1 = std::vector<std::string>{};
    auto zakres = std::vector<char>{};

    auto linia = std::string{};

    do
    {
        std::getline(std::cin, linia);
        while (linia.size() != 3 && linia != "stop")
        {
            std::cout << "Podaj w kolejnosci 'arg1 -> spacja -> arg2'\n";
            std::getline(std::cin, linia);

        }

        if(linia != "stop")
            tab1.push_back( linia );

    } while (linia != "stop");

    for(auto element : tab1)
    {
        if((int)element[0] < (int)element[2])
        {
            for(int i = (int)element[0]; i <= (int)element[2]; ++i)
            {
                zakres.push_back( (char)i );
            }
            zakres.push_back('\n');
        }else{
            for(int i = (int)element[2]; i <= (int)element[0]; ++i)
            {
                zakres.push_back( (char)i );
            }
            zakres.push_back('\n');
        }
    }

    for(auto element : zakres)
    {
        std::cout << element;
    }

    return 0;
}














