#ifndef ZAD_3_ZAD_3_H
#define ZAD_3_ZAD_3_H

class Wymierne
{
    int numerator, denominator;

public:
    Wymierne(int, int);
    Wymierne(int);

    auto simplify(int& ,int&) -> void;
    auto NWD(int, int) -> int;
    auto getX() -> int;
    auto getY() -> int;
    auto show() -> void;
    auto sum(Wymierne) -> Wymierne&; // <---------- dokończyć
    auto sum2(Wymierne) -> void;
};


#endif //ZAD_3_ZAD_3_H
