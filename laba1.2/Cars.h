#pragma once
#include "Car.h"

class Cars
{
private:
	Car* cars;
	int number;
	int maxNumbers;
public:
	Cars();
	Cars(const int);

	void SetCars(Car* c) { this->cars = c; }
	void SetNumber(int n) { this->number = n; }
	void SetMaxNumbers(int mn) { this->number = mn; }

	Car* GetCars() const { return cars; }
	int GetNumber() const { return number; }
	int GetMaximumNumber() const { return maxNumbers; }

	void Add(Car);
	void Change(int,Car) const;
	void Remove(int);
	void Display() const;
	void Sort() const ;
	Car FindMaxPrice() const;
};