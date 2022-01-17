#include <iostream>
#include "zad_3.h"

Wymierne::Wymierne(int a, int b)
{
    simplify(a, b);
    numerator = a;
    denominator = b;
}

Wymierne::Wymierne(int a)
        : numerator(a)
        , denominator(1)
{}

auto Wymierne::simplify(int& a, int& b) -> void
{
    int c = NWD(a,b);
    a /= c;
    b /= c;
}

auto Wymierne::NWD(int a, int b) -> int
{
    while(a != b)
        if(a > b)
            a -= b;
        else
            b -= a;

    return a;
}

auto Wymierne::getX() -> int
{
    return numerator;
}

auto Wymierne::getY() -> int
{
    return denominator;
}

auto Wymierne::show() -> void
{
    std::cout << "num = " << getX() << ", den = " << getY() << '\n';
}

//zad 6
/*auto liczba5 = Wymierne(1);

auto Wymierne::sum(Wymierne x) -> Wymierne &
{
    auto liczba = Wymierne(numerator, denominator);

    int tmp_den = denominator;

    liczba.numerator *= x.denominator;
    liczba.denominator *= x.denominator;

    x.numerator *= tmp_den;
    liczba.numerator += x.numerator;

    liczba5 = liczba;

    return liczba5;
}*/

auto Wymierne::sum2(Wymierne x) -> void
{
    int tmp_den = denominator;

    numerator *= x.denominator;
    denominator *= x.denominator;

    x.numerator *= tmp_den;
    numerator += x.numerator;

    if(numerator % denominator == 0)
        std::cout << "Suma = " << numerator/denominator << '\n';
    else
        std::cout << "Suma " << numerator << " " << denominator << '\n';
}


auto main() -> int
{
    auto liczba = Wymierne(1,2);
    liczba.show();

    auto liczba2 = Wymierne(1,3);
    liczba2.show();

    liczba.sum2(liczba2);


    std::cout <<  "----------------\n";
    //Wymierne liczba3 = liczba.sum(liczba2);
    //liczba3.show();

    return 0;
}
