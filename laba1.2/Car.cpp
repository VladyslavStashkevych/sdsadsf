#include "Car.h"
#include <iostream>
#include <sstream>

using namespace std;

Car::Car() {
	SetType(regular);
	SetBrand(new char[] { "BMW" });
	SetYear(1998);
	SetMaxSpeed(240);
	SetPrice(2950);
};
Car::Car(carType t, char* b, int y, double ms, double p) 
{
	SetType(t);
	SetBrand(b);
	SetYear(y);
	SetMaxSpeed(ms);
	SetPrice(p);
};
string Car::toString() const 
{
	string brandToString = "";
	stringstream sout;
	for (int i = 0; i < sizeof(brand); i++)
	    brandToString += brand[i];
	if (type == 0)
		  sout << "Regular car ";
	else
		sout << "Truck ";
	sout << GetType() << " car from " << brandToString << " with max speed: " << GetMaxSpeed() << " costs : " << GetPrice() << endl;
	return sout.str();
};
void Car::Display() const
{
	cout << this->toString();
}