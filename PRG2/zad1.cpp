#include <iostream>
#include <vector>

auto average_of(std::vector<float> tab) -> float
{
    auto suma = float{0};
    for(auto element : tab)
    {
        suma+=element;
    }

    return suma / (tab.size());
}

int main()
{
    auto tab = std::vector<float>{1,2.3};
    std::cout << average_of(tab) << "\n";
    return 0;
}
