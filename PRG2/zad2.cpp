#include <iostream>
#include <string>
#include <vector>

auto filter_palindromes(std::vector<std::string> tab) -> std::vector<std::string>;
auto is_palindrome(std::string napis) -> bool;

int main() {
    auto tab = std::vector<std::string>{"ala", "kot", "placki", "ttrrtt"};

    for (auto element : filter_palindromes(tab))
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
    return 0;
}

auto filter_palindromes(std::vector<std::string> tab) -> std::vector<std::string>
{
    auto palindrom = false;
    auto only_palindrom = std::vector<std::string>{};
    for(auto element : tab)
    {
        palindrom = is_palindrome(element);
        if(palindrom == true)
        {
            only_palindrom.push_back(element);
        }
    }
    return only_palindrom;
}

auto is_palindrome(std::string napis) -> bool
{
    int nie = 0;
    for(int i = 0; i < napis.size() / 2; i++)
    {
        if(napis[i] == napis[napis.size() - 1 - i])
            continue;
        else
        {
            nie++;
            break;
        }
    }

    if(nie == 0)
        return true;
    else
        return false;
}
