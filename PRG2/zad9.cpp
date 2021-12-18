#include <iostream>
#include <vector>

auto constains_all(std::vector<int>& tab1, std::vector<int> tab2) -> bool
{
    for(auto element1 : tab1)
    {
        for(auto i = 0; i < tab2.size(); ++i)
        {
            if(element1 == tab2[i])
            {
                tab2.erase(tab2.begin() + i);
                break;
            }
        }
    }

    if( tab2.empty() )
        return true;


    return false;
}

auto main() -> int
{
    auto tab1 = std::vector<int>{1,2,3,4,5,6,7,8,9,9};
    auto tab2 = std::vector<int>{6,2,1,3,9,5};

    //wyświetla 1 jesli tab2 jest podzbiorem tab1
    //wyświetla 0 jesli tab2 nie jest podzbiorem tab1
    std::cout << constains_all(tab1, tab2) << '\n';

    return 0;
}
