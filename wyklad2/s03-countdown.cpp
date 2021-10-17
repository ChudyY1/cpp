#include <iostream>

auto main(int argc, char* argv[])->int
{
  
    if(argc==0)
    {
        return 1; //co to zmienia?
    }
    auto const a = std::stoi(argv[1]);
    if(a>=0)
    {
        for(auto i=a;i>=0;i--)
        {
            std::cout<<i<<"\n";
        }
    }
    else
    {
        for(auto i=a;i<=0;i++)
        {
            std::cout<<i<<"\n";
        }
    }
    return 0;
}
