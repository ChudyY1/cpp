#include <iostream>
#include <string>
#include <vector>

auto split(std::string napis) -> std::vector<std::string>
{
    auto kr_napis = std::string{""};
    auto tab = std::vector<std::string>{};

    for(auto i = 0; i <= napis.size(); ++i)
    {
        if((int)napis[i] == 32 || i == napis.size())
        {
            tab.push_back(kr_napis);
            kr_napis = {};
        }
        else
        {
            kr_napis += napis[i];
        }
    }

    return tab;
}

int main()
{

    for (auto element : split("ala ma kota"))
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
