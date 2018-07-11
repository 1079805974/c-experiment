#pragma once
#include <iostream>
using namespace std;
class Vehicle {
protected:
	int MaxSpeed;
	double Weight;
public:
	Vehicle(){}
	Vehicle(int speed, double weight) {
		MaxSpeed = speed;
		Weight = weight;
	}
	virtual void run() {
		cout << "the vehicle is running!" << endl << "its speed is " << MaxSpeed << "km/h and its weight is " << Weight << "kg" << endl;
	}
	virtual void stop() {
		cout << "the vehicle has stopped!" << endl;
	}
};

class Bicycle : virtual public Vehicle{
protected:
	int height;
public:
	Bicycle() {}
	Bicycle(int h, int speed, double weight) : Vehicle(speed, weight){
		height = h;
	}
	void run() {
		cout << "the bicycle is running!" << endl << "its speed is " << MaxSpeed << "km/h and its weight is " << Weight << "kg" << endl;
		cout << "its height is " << height << " cm" << endl;
	}
	void stop() {
		cout << "the bicycle has stopped!" << endl;
	}
};

class Motorcar : virtual public Vehicle {
protected:
	int SeatNum;
public:
	Motorcar() {}
	Motorcar(int seat, int speed, double weight) : Vehicle(speed, weight) {
		SeatNum = seat;
	}
	void run() {
		cout << "the car is running!" << endl <<"its speed is " << MaxSpeed << "km/h and its weight is " << Weight << "kg" << endl;
		cout << "its seat numeber is " << SeatNum << endl;
	}
	void stop() {
		cout << "the car has stopped!" << endl;
	}
};

class Motorcycle : public Motorcar, public Bicycle {

public:
	Motorcycle(){}
	Motorcycle(int speed, double weight) : Vehicle(speed, weight) {}
	void run() {
		cout << "the motorcycle is running!" << endl << "its speed is " << MaxSpeed << "km/h and its weight is " << Weight << "kg" << endl;
	}
	void stop() {
		cout << "the motorcycle has stopped!" << endl;
	}
};