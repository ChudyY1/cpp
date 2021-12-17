#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<float> oceny;
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

auto get_best_student(std::vector<Student> tab) -> Student
{
    auto najlepsza = float{0};
    auto the_best_student = Student{};

    for (auto s : tab)
    {
        if( average_of(s) > najlepsza)
        {
            najlepsza = average_of(s);
            the_best_student = s;
        }
    }

    return the_best_student;
}

auto main() -> int
{


    auto s1 = Student{"Pawel", "PPPPPPPP",{5,5,5,4}};
    auto s2 = Student{"Maks", "MMMMM",{2,2,2,2}};
    auto s3 = Student{"Ala", "AAAAAA",{5,5,3.5,4}};

    auto studenci = std::vector<Student> {s1,s2,s3};
    std::cout << get_best_student(studenci).imie << " " << get_best_student(studenci).nazwisko << "\n";


    return 0;
}






















