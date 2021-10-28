#include <iostream>

struct Student
{
    std::string const imie="Student";
    std::string const nazwisko="Studencki";
    std::string const nr_indeksu="1234";
    int a_semestr = 1;
    float sr_ocen = 4.5;
    
    Student()=default; //Czy ta linijka cos zmienia?
    Student(std::string, std::string, std::string, int, float);
    void to_string() const;
};
void Student::to_string() const
{
    std::cout<<imie<<" "<<nazwisko<<" "<<nr_indeksu<<" "<<a_semestr<<" "<<sr_ocen<<"\n";    
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
    mr.to_string();
    return 0;
}
