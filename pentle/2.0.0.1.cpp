#include <iostream>

auto przedzial(int a, int b, int c) -> void;
auto get() -> int;

auto main() -> int
{
    auto a = get();
    auto b = get();
    auto c = get();
    przedzial(a, b, c);
       
    return 0;
}

auto przedzial(int a, int b, int c) -> void
{
   
    while(c == 0)
    {
        std::cout << "c nie moze byc rowne 0\n";
        c = get();
    }
   
    for(auto i=a; i<b; i++)
    {
        if(i%c == 0)    std::cout << i << " ";
    }
    std::cout << "\n";
}

auto get() -> int
{
    std::cout << "Podaj liczbe: ";
    auto a = std::string{}; 
    std::getline(std::cin, a);
    return stoi(a);
}
