#include <iostream>
#include <string> 

struct Student
{
private:
    std::string const imie="Student";
    std::string const nazwisko="Studencki";
    std::string const nr_indeksu="1234";
    int a_semestr = 1;
    float sr_ocen = 4.5;
public:
    Student() = default; //Czy ta linijka cos zmienia?
    Student(std::string, std::string, std::string, int, float);
    auto to_string() -> std::string;
};
