#include <iostream>
#include <string>
struct Hour
{
    int hour=01, minutes=00, sec=00;
    std::string to_string();
    auto next_hour()->void;
    auto next_minute()->void;
    auto next_second()->void;
    Hour(int,int,int);
};

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

auto main()->int
{
    auto h1=Hour{23,58,58};
    for(auto i=0; i<3; i++)
    {
    std::cout<<h1.to_string()<<"\n";
    h1.next_minute();
    }
    for(auto i=0; i<3; i++)
    {
    std::cout<<h1.to_string()<<"\n";
    h1.next_second();
    }
   
    
    return 0;
}