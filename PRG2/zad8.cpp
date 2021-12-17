#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

auto average_of(Student const& student) -> float
{
    auto suma = float{0};
    for (auto element : student.oceny)
    {
        suma += element;
    }


    return suma / (student.oceny.size());
}

auto mediana(std::vector<float>& sr_ocen) -> float
{
    float mediana;
    std::sort(sr_ocen.begin(), sr_ocen.end());

    if(sr_ocen.size() % 2 == 0)
    {
        mediana = (sr_ocen[sr_ocen.size()/2] + sr_ocen[sr_ocen.size()/2 - 1]) / 2;
    }
    else
    {
        mediana = sr_ocen[sr_ocen.size()/2];
    }

    return mediana;
}

auto best_groups_name(std::vector<Group> const& grupy) -> std::string
{
    float maks_mediana = 0;
    auto the_best_name = std::string {""};
    auto srednia_ocen_grupy = std::vector<float>{};

    for(int i = 0; i < grupy.size(); ++i)
    {
        for(int j = 0; j < grupy[i].studenci_grupa.size(); ++j)
        {
            srednia_ocen_grupy.push_back( average_of( grupy[i].studenci_grupa[j] ) );
        }

        if( maks_mediana < mediana(srednia_ocen_grupy) )
        {
            maks_mediana = mediana( srednia_ocen_grupy );
            the_best_name = grupy[i].nazwa;
        }
    }

    return the_best_name;
}

auto main() -> int
{


    auto s1 = Student{"Pawel", "PPPPPPPP",{5,5,5,4}};
    auto s2 = Student{"Maks", "MMMMM",{3,5,3,5}};

    auto g1 = Group{"Koksy", {s1,s2}};

    auto s3 = Student{"Ala", "AAAAAA",{5,5,3.5,4}};
    auto s4 = Student{"Radek", "RRRRR",{2,3,4,5}};

    auto g2 = Group{"Mniejsze_Koksy", {s3,s4}};

    auto grupy = std::vector<Group>{g1, g2};
    std::cout << best_groups_name(grupy) << "\n";

    return 0;
}