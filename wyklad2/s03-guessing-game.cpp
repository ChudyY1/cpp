#include <iostream>
#include <cstdlib>
#include <ctime>

void guessing(int number)
{
    int c;
    std::string b;
    do
    {
        std::cout<<"guess: ";
        std::getline(std::cin,b);
        c=std::stoi(b);
        if(c<number)
        {
            std::cout<<"too small"<<"\n";
        }
        else if(c>number)
        {
            std::cout<<"too big"<<"\n";
        }
        else
        {
            std::cout<<"just right"<<"\n";
        }
    }while(c!=number);
}
auto main()->int
{

    srand(time(NULL));
    auto const a = rand()%101;
    guessing(a);
    return 0;
} 
