
#include <iostream>
#include <string>
#include "s03-Time.h"

std::string Hour::to_string() 
{
    std::string G;
    if(hour<10) 
    {
    G = "0" +std::to_string(hour);
    }
    else    G = std::to_string(hour);

    std::string M;
    if(minutes<10)  M = "0" + std::to_string(minutes);
    else    M = std::to_string(minutes);

    std::string S; 
    if(sec<10) S = "0" + std::to_string(sec);
    else    S = std::to_string(sec);
    return G + ":" + M + ":" +S;
}

auto Hour::next_hour()-> void
{
    hour++;
    if(hour > 23)
    {
        hour = 0;
    }
}

auto Hour::next_minute()-> void
{
    minutes++;
    if(minutes > 59)
    {
        minutes = 0;
        next_hour();
    }
}

auto Hour::next_second()-> void
{
    sec++;
    if(sec > 59)
    {
        sec = 0;
        next_minute();
    }
}

Hour::Hour(int h, int m, int s)
    : hour{h}
    , minutes{m}
    , sec{s}
{}

auto Hour::time_of_day() const
{
    Time_of_day t1;
    if(hour<=6) t1 = Time_of_day::noc;

    else if(hour<=9) t1 = Time_of_day::rano;

    else if(hour<=19) t1 = Time_of_day::dzien;
    
    else    t1 = Time_of_day::wieczor;
   
    return t1; 
}

void to_string(Time_of_day pora) //Jak zamienic to na funkcje zwracajaca std::string? Jak zamienic wartosc wyliczeniowa na napis?
{
    switch(pora)
    {       
        case Time_of_day::noc : std::cout << "noc\n"; break;
        case Time_of_day::rano : std::cout << "rano\n"; break;
        case Time_of_day::dzien : std::cout << "dzien\n"; break;
        case Time_of_day::wieczor : std::cout << "wieczor\n"; break;
    }
    
}

auto main()->int
{
    auto h1=Hour{23,58,58};
    for(auto i=0; i<3; i++)
    {
    std::cout<<h1.to_string()<<"    ";
    
    to_string(h1.time_of_day());

    h1.next_minute();
    }
    for(auto i=0; i<3; i++)
    {
    std::cout<<h1.to_string()<<"    ";

    to_string(h1.time_of_day());

    h1.next_second();
    }
   
    
    return 0;
}
