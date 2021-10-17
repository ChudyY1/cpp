#include <iostream>

auto fizzbuzz(int a)->void
{
    for(auto i=1;i<=a;i++)
    {
        std::cout<<i<<" ";
        if(i%15==0)
        {
            std::cout<<"FizzBuzz";
        }
        else if(i%3==0)
        {
            std::cout<<"Fizz";
        }
        else if(i%5==0)
        {
            std::cout<<"Buzz";
        }
        std::cout<<"\n";
    }
}
auto main(int argc, char* argv[])->int
{
    auto const a = std::stoi(argv[1]);
    fizzbuzz(a);
    
    return 0;
}
