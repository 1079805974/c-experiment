#include <iostream>

#include "cpoint.h"

CPoint CPoint::operator+(CPoint& p){
    CPoint result(x + p.GetX(), y + p.GetY());
    return result;
}

CPoint operator-(CPoint& p1, CPoint& p2){
    int dx = p1.GetX() - p2.GetX();
    int dy = p1.GetY() - p2.GetY();
    CPoint result(dx, dy);
    return result;
}

#ifdef LAB2_3

int main(int argc, char const *argv[])
{
    CPoint a(1, 1);
    CPoint b(2, 2);
    CPoint c;
    c = a + b;
    CPoint d;
    d = b - a;
    c.ShowPoint();
    d.ShowPoint();
    std::cin.get();
    return 0;
}

#endif
