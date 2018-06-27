#include "cpoint.h"

using namespace std;
istream& operator>>(istream& in, CPoint& p){
    int x, y;
    in >> x;
    in >> y;
    p.SetY(y);
    p.SetX(x);
    return in;
}

ostream& operator<<(ostream& out, CPoint& p){
   out << "("<< p.GetX() << ", " << p.GetY() << ")";
}

#ifdef LAB2_4

int main(int argc, char const *argv[])
{
    CPoint p(0, 0);
    cout << p << endl;
    cout << "请输入纵坐标与横坐标,格式: x y"<< endl;
    cin >> p;
    cout << p << endl;
    return 0;
}

#endif