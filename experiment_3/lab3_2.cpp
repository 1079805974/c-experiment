#include <iostream>
#include "vehicle.h"
using namespace std;

int main()
{
	Vehicle ve(50, 200);
	Bicycle bc(120, 20, 50);
	Motorcar mb(5, 70, 500);
	Motorcycle mc(60, 150);
	Vehicle *v = new Vehicle;
	ve.run();
	bc.run();
	mb.run();
	mc.run();
	v->stop();
	v = new Bicycle;
	v->stop();
	v = new Motorcar;
	v->stop();
	v = new Motorcycle;
	v->stop();
	system("pause");
    return 0;
}

