#include "Cars.h"
#include <iostream>

using namespace std;

Cars::Cars() 
{
	SetMaxNumbers(10);
	SetNumber(0);
	SetCars(new Car[10]);
};
Cars::Cars(const int n)
{
	SetMaxNumbers(n);
	SetNumber(0);
	SetCars(new Car[n]);
}
void Cars::Add(Car c)
{
	cars[number] = c;
	number++;
}
void Cars::Change(int index, Car newCar) const
{
	cars[index] = newCar;
}

void Cars::Remove(int index)
{
	for (int i = index; i < number - 1; i++)
	{
		cars[i] = cars[i+1];
	}
	number--;
}
void Cars::Display() const
{
	for (int i = 0; i < number; i++)
		cars[i].Display();
}
void Cars::Sort() const
{	
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (cars[j].GetPrice() > cars[i].GetPrice())
			{
				Car temp = cars[i];
				cars[i] = cars[j];
				cars[j] = temp;
			}
		}
	}
}
Car Cars::FindMaxPrice() const
{
	Car result; 
	for (int j = 0; j < number - 1; j++)
	{
		if (cars[j+1].GetPrice() > cars[j].GetPrice())
		{
			result = cars[j+1];
		}
	}
	return result;
}