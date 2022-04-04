#pragma once
#include <string>

enum carType
{
	regular,
	truck
};


class Car
{
private:
	carType type;
	char* brand;
	int year;
	double maxSpeed;
	double price;
public:
	Car();
	Car(carType, char*, int, double, double);

	void SetType(carType t) { this->type = t; };
	void SetBrand(char* b) { this->brand = b; };
	void SetYear(int y) { this->year = y; };
	void SetMaxSpeed(double ms) { this->maxSpeed = ms; };
	void SetPrice(double p) { this->price = p; };

	carType GetType() const { return type; };
	char* GetBrand() const { return brand; };
	int GetYear() const { return year; };
	double GetMaxSpeed() const { return maxSpeed; };
	double GetPrice() const { return price; };

	std::string toString() const;
	void Display() const;
};
