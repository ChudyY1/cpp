#include <iostream>

auto przedzial(int a, int b, int c, int s) -> void;
auto get() -> int;

auto main() -> int
{
    auto a = get();
    auto b = get();

    if(a > b)
    {
        std::cout << "a nie moze byc wieksze od b\n";
        a = get();
        b = get();   
    }

    auto c = get();
    auto s = get();
    przedzial(a, b, c, s);
       
    return 0;
}

auto przedzial(int a, int b, int c, int s) -> void
{
   
    while(c == 0)
    {
        std::cout << "c nie moze byc rowne 0\n";
        c = get();
    }
    
    while(s == 0)
    {
        std::cout << "s nie moze byc rowne 0\n";
        s = get();
    }

    if(s > 0)
    {
        for(auto i=a; i<b; i += s) // i = i + s
        {
            if(i%c == 0)    std::cout << i << " ";
        }
    }
    else
    {
        for(auto i=b; i>a; i+=s)
        {
            if((i-1)%c == 0)    std::cout << i-1 << " ";
        }
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
