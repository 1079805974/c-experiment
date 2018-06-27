#include <iostream>
#include <math.h>

#include "cpoint.h"
#include "cline.h"

class CLine
{
private:
	CPoint pt1, pt2;  //pt1和pt2分别代表该线段的起点和终点
public:
	CLine();
	CLine(int x1, int y1, int x2, int y2);
	CLine(CPoint p1, CPoint p2);
	double Distance();  //计算该线段长度的成员函数??????为什么不叫length?????????????
	void ShowLine();
};

CLine::CLine(){
    pt1 = CPoint();
    pt2 = CPoint();
}

CLine::CLine(int x1, int y1, int x2, int y2){
    pt1 = CPoint(x1, y1);
    pt2 = CPoint(x2, y2);
}

CLine::CLine(CPoint p1, CPoint p2){
    pt1 = p1;
    pt2 = p2;
}

double CLine::Distance(){
    double dx = pt1.GetX() - pt2.GetX();
    double dy = pt1.GetY() - pt2.GetY();
    return sqrt(dx*dx + dy*dy);
}

void CLine::ShowLine(){
    std::cout << "from:" << std::endl;
    pt1.ShowPoint();
    std::cout << "to:" << std::endl;
    pt2.ShowPoint();
}

#ifdef LAB2_2

int main(int argc, char const *argv[])
{
    CLine l(0, 0, 1, 1);
    l.ShowLine();
    std::cin.get();
    return 0;
}

#endif
