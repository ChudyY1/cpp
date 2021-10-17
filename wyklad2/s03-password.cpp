#include <iostream>

auto main()-> int
{
    auto password=std::string{};
    do
    {
        std::cout<<"Password: ";
        std::getline(std::cin,password);
    }while(password!="student");
    std::cout<<"ok"<<"\n";
    return 0;
}
