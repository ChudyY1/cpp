#include <iostream>
#include <vector>

auto dot_product(std::vector<float> tab1, std::vector<float> tab2) -> float
{
    if(tab1.size() != tab2.size())
    {
        std::cout << "Wektory sa roznej wielkosci!!!!!\n";
        return -1;
    }

    auto iloczyn_skalarny = float{0};

    for(int i = 0; i < tab1.size(); i++)
    {
        iloczyn_skalarny += tab1[i] * tab2[i];
    }

    return iloczyn_skalarny;
}

auto main() -> int
{
    auto tab1 = std::vector<float>{4,2};
    auto tab2 = std::vector<float>{3,2};
    std::cout << dot_product(tab1, tab2) << "\n";
    return 0;
}
