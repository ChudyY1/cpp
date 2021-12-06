#include <iostream>
#include <string>
#include "Time.h"

auto Time::to_string() -> std::string
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

auto Time::next_hour()-> void
{
    hour++;
    if(hour > 23)
    {
        hour = 0;
    }
}

auto Time::next_minute()-> void
{
    minutes++;
    if(minutes > 59)
    {
        minutes = 0;
        next_hour();
    }
}

auto Time::next_second()-> void
{
    sec++;
    if(sec > 59)
    {
        sec = 0;
        next_minute();
    }
}

Time::Time(int h, int m, int s)
    : hour{h}
    , minutes{m}
    , sec{s}
{}

auto Time::time_of_day() const
{
    Time_of_day t1;
    if(hour<=6) 		t1 = Time_of_day::noc;

    else if(hour<=9) 	t1 = Time_of_day::rano;

    else if(hour<=19) 	t1 = Time_of_day::dzien;
    
    else    			t1 = Time_of_day::wieczor;
   
    return t1; 
}

auto to_string(Time_of_day pora) -> std::string 
{
    switch(pora)
    {       
        case Time_of_day::noc     :     return  "noc\n";        break;
        case Time_of_day::rano    :     return  "rano\n";       break;
        case Time_of_day::dzien   :     return  "dzien\n";      break;
        case Time_of_day::wieczor :     return  "wieczor\n";    break;
        default                   :     return  "Brak danych";
    }
    
}

//zad. arytmetyka
auto Time::operator+ (Time const& p)  const -> Time
{
	auto h3 = Time{hour, minutes, sec};
		
	int h, m, s;
	if(hour + p.hour > 24)
	{
		h = hour + p.hour - 24;
	}
	else
		h = hour + p.hour;
			
	if(minutes + p.minutes > 59)
	{
		m = minutes + p.minutes - 60;
		h++;
	}
	else
		m = minutes + p.minutes;
		
	if(sec + p.sec > 59)
	{
		s = sec + p.sec - 60;
		m++;
	}
	else
		s = sec + p.sec;
				
	h3.hour = h;
	h3.minutes = m;
	h3.sec = s;
		
	return h3;
}

auto Time::operator- (Time const& p)  const -> Time
{
	auto h3 = Time{hour, minutes, sec};
	
	if(h3 < p)
	{
		std::cout << "Nie ma ujemnego czasu. Podaj argz1 > argz2" << std::endl;
		return h3;
	}	
	
	int h, m, s;
	
	h = hour - p.hour ;
			
	if(minutes - p.minutes < 0)
	{
		m = minutes - p.minutes + 60;
		h--;
	}
	else
		m = minutes - p.minutes;
		
	if(sec + p.sec < 0 )
	{
		s = sec + p.sec + 60;
		m--;
	}
	else
		s = sec - p.sec;
				
	h3.hour = h;
	h3.minutes = m;
	h3.sec = s;
		
	return h3;
}

auto Time::operator< (Time const &p) const -> bool
{

	if(hour < p.hour)
	{
		return true;
	}
	else if(hour == p.hour)
	{
		if(minutes < p.minutes)
		{
			return true;
		}
		else if(minutes == p.minutes)
		{
			if(sec < p.sec)
			{
				return true;
			}
			else 
				return false;
		}
	} 
	return false;
}

auto Time::operator> (Time const &p) const -> bool
{

	if(hour > p.hour)
	{
		return true;
	}
	else if(hour == p.hour)
	{
		if(minutes > p.minutes)
		{
			return true;
		}
		else if(minutes == p.minutes)
		{
			if(sec > p.sec)
			{
				return true;
			}
			else 
				return false;
		}
	} 
	return false;
}

auto Time::operator== (Time const &p) const -> bool
{
	if(hour == p.hour && minutes == p.minutes && sec == p.sec)
		return true;
	
	return false;
}

auto Time::operator!= (Time const &p) const -> bool
{
	if(hour == p.hour && minutes == p.minutes && sec == p.sec)
		return false;
	
	return true;
}

auto main() -> int
{
    auto h1 = Time{23,58,58};
    for(auto i=0; i<3; i++)
    {
    std::cout << h1.to_string()<<"    ";
    
    std::cout << to_string(h1.time_of_day());

    h1.next_minute();
    }
    for(auto i=0; i<3; i++)
    {
    std::cout << h1.to_string()<<"    ";

    std::cout << to_string(h1.time_of_day());

    h1.next_second();
    }
   
   //zadanie ARYTMETYKA
   auto h2 = Time{12,1,59};
   auto h3 = Time{5,30,1};
   
   std::cout << std::endl; 
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " + " << std::endl;
   std::cout << (h3 + h2).to_string() << std::endl; 
   
   std::cout << std::endl;
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " - " << std::endl;
   std::cout << (h2 - h3).to_string() << std::endl; 
   
   std::cout << std::endl;
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " < " << std::endl;
   std::cout << (h2 < h3) << std::endl; 
   
   std::cout << std::endl;
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " > " << std::endl;
   std::cout << (h2 > h3) << std::endl; 

   std::cout << std::endl;
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " = " << std::endl;
   std::cout << (h2 == h3) << std::endl;
    
   std::cout << std::endl;
   std::cout << h2.to_string()<< std::endl;
   std::cout << h3.to_string()<< " != " << std::endl;
   std::cout << (h2 != h3) << std::endl; 
   
    
   
    return 0;
}
