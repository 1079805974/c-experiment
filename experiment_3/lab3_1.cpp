#include "cthreepoint.h"

CThreePoint::CThreePoint(){
    SetX(0);
    SetY(0);
    z = 0;
}

CThreePoint::CThreePoint(int x, int y, int z){
    SetX(x);
    SetY(y);
    this->z = z;
}

int CThreePoint::GetZ(){
    return z;
}

void CThreePoint::SetZ(int pz){
    z = pz;
}

void CThreePoint::ShowPoint(){
    std::cout << "("<< GetX() << ", " << GetY() << ", " << z << ")" << std::endl;
}

#ifdef LAB3_1

int main(int argc, char const *argv[])
{
    CThreePoint p(0, 0, 0);
    p.ShowPoint();
    return 0;
}

#endif