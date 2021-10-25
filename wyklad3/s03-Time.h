#include <iostream>
#include <string>

struct Hour
{
    int hour=1, minutes=0, sec=0;
    std::string to_string();
    auto next_hour()->void;
    auto next_minute()->void;
    auto next_second()->void;
    Hour(int,int,int);
    
    auto time_of_day() const; //zad pora dnia
};

enum class Time_of_day {rano, dzien, wieczor, noc};

void to_string(Time_of_day);
