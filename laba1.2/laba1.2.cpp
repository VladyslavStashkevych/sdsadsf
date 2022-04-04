#include <iostream>
#include "Cars.h"

using namespace std;

int main()
{
	Car streetCar;
	Car truckCar(truck, new char[] {"MAN"}, 2015, 160, 100000);
	streetCar.SetMaxSpeed(269.34);
	Cars manyCars;
	manyCars.Add(streetCar);
	manyCars.Add(truckCar);
	truckCar.SetYear(2016);
	manyCars.Change(1, truckCar);
	manyCars.Display();
	cout << endl;
}