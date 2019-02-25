#include "pch.h"
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;


Car::Car()
{
	tank = 5;
	speed = 0;
	model = "New Car";
	maxFuel = 20;
}
void Car::pumpGas(int t) {
	int value = 0;
	if (tank + t >= 20) {
		cout << "You are trying to enter in: " << t << " Gallons of fuel" << endl;
		cout << "You can not enter that much fuel the tank will overflow" << endl;
		cout << "The tank already has " << tank << " gallons of fuel\nThe max you can put in is " << maxFuel - tank << " Gallons of fuel\n";
	}
	else
	{
		tank += t;
		value = t * 4;
		cout << "You have added " << t << " Gallons of gas to the car. It now has " << tank << " Gallons of gas. The price for gas is $4.00 / Gallon.\n";
		cout << "The total for gas is $" << value << endl;
	}

}
void Car::goFast() {
	speed += 5;
	cout << "You have now speed up to " << speed << "mph" << endl;
}
void Car::display() {
	cout << "You are driving a " << model << " it is has " << tank << " Gallons of fuel. It is currently traveling at a speed of " << speed << "mph" << endl;
}
int Car::getTank() const {
	return tank;
}
int Car::getSpeed() const {
	return speed;
}
Car Car::operator+(const Car &c) {
	Car temp;
	temp.tank = tank + c.tank;
	return temp;
}
Car Car::operator-(const Car &c) {
	Car temp;
	if (c.tank > tank) {
		temp.tank = c.tank - tank;
	}
	else {
		temp.tank = tank - c.tank;
	}
	return temp;
}
Car & Car::operator--()
{
	speed = speed - 1;
	if (speed <= 0) {
		speed = 0;
	}
		return *this;
	
}

Car Car::operator--(int c) {
	Car temp;
	temp = *this;
	speed = speed - 1;
	if (speed <= 0) {
		speed = 0;
	}
		return temp;
}