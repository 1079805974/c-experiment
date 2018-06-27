#pragma once
#include <iostream>

using namespace std;

class CPoint
{
private:
	int x, y;
	static int nCount;   // nCount用于保存点的个数
public:
	CPoint(int px=0, int py=0);
	CPoint(CPoint&);
	~CPoint();
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
	void ShowPoint();
	CPoint operator+(CPoint&); 
};

CPoint operator-(CPoint&, CPoint&); 
istream& operator>>(istream&, CPoint&);
ostream& operator<<(ostream&, CPoint&);