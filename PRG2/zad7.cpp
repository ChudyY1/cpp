#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<float> oceny;
};

struct Group
{
    std::string nazwa;
    std::vector<Student> studenci_grupa;
};

auto add_student(Group& grupa, Student const& student) -> void
{
    grupa.studenci_grupa.push_back(student);
}

auto main() -> int
{


    auto s1 = Student{"Pawel", "PPPPPPPP",{5,5,5,4}};
    auto s2 = Student{"Maks", "MMMMM",{2,2,2,2}};
    auto s3 = Student{"Ala", "AAAAAA",{5,5,3.5,4}};

    auto g1 = Group{"Koksy", {s1,s2,s3}};

    for(auto element : g1.studenci_grupa)
    {
        std::cout << element.imie << " " << element.nazwisko << std::endl;
    }
    std::cout<< "\n";

    auto s4 = Student{"Radek", "RRRRR",{2,3,4,5}};
    add_student(g1,s4);

    for(auto element : g1.studenci_grupa)
    {
        std::cout << element.imie << " " << element.nazwisko << std::endl;
    }


    return 0;
}














