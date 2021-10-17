#include <iostream>
#include <string>

int ask_user_for_int(std::string prompt)
{
    std::cout<<prompt<<" int:";
    std::string n;
    std::getline(std::cin, n);
    return std:: stoi(n);
}
int main()
{
    int a = ask_user_for_int("a= ");
    int b = ask_user_for_int("b= ");
    std::cout<<(a*b)<<"\n";
    return 0;
}
