#include <iostream>
#include <malloc.h>
#include "cpoint.h"

CPoint::CPoint(int x, int y){
    this -> x = x;
    this -> y = y;
    nCount++;
}

CPoint::CPoint(CPoint& point){
    this -> x = point.GetX();
    this -> y = point.GetY();
    nCount++;
}

CPoint::~CPoint(){
    nCount--;
}

int CPoint::GetX(){
    return x;
}

int CPoint::GetY(){
    return y;
}

void CPoint::SetX(int x){
    this->x = x;
}

void CPoint::SetY(int y){
    this->y = y;
}

void CPoint::ShowPoint(){
    std::cout << "("<< x << ", " << y << ")" << std::endl;
}

int CPoint::nCount = 0;

#ifdef LAB2_1

int main(int argc, char const *argv[])
{
    CPoint *A = (CPoint*)malloc(sizeof(CPoint));
    A->SetX(2);
    A->SetY(6);
    A->ShowPoint();
    cout << (sizeof(CPoint));
    std::cin.get();
    return 0;
}

#endif
