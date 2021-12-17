#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    std::string nazwisko;
    std::vector<float> oceny = {3.5,4,5};
};

auto average_of(Student student) -> float
{
    auto suma = float{0};
    for (auto element : student.oceny)
    {
        suma += element;
    }


    return suma / (student.oceny.size());
}

int main()
{

    auto s1 = Student{"Pawel", "Peplinski"};
    std::cout << average_of(s1) << "\n";

    return 0;
}
