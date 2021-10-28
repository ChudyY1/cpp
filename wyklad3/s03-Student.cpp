#include <iostream>
#include <string> 
#include "Student.h"

auto Student::to_string() -> std::string
{
   return imie + "  " + nazwisko + "   " + nr_indeksu + "   " + std::to_string(a_semestr) + "   " + std::to_string(sr_ocen) + "\n";
}

Student::Student(std::string i,std::string n, std::string nr_i, int a_sem, float sr_o)
    : imie{std::move(i)} //czemu nie imie{i} ?
    , nazwisko{std::move(n)}
    , nr_indeksu{std::move(nr_i)}
    , a_semestr{a_sem}
    , sr_ocen{sr_o}
{}

auto main()->int
{
    auto mr = Student{"Pawel","Peplinski","24803",1,5.5};
    std::cout << mr.to_string();
    return 0;
}
