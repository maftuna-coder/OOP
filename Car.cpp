#include <iostream>
#include <cstring>
using namespace std;
#include "Seat.h"
//Maftuna Sharabbaeva U1510067  007
#include "Window.h"
#include "Engine.h"
#include "Car.h"
Car::Car(string n, string s, string b, Seat* se, Engine en, Window* wi) :name(n), serial(s), bodyType(b), engine(en)
{
	for (int i = 0; i < size; i++)
	{
		seats[i] = se[i];
		
	}
	for (int l = 0; l < size; l++)
	{
		windows[l] = wi[l];
	}

	
}
void Car::setName(string n)
	{
		name = n;
	}
string Car::getName()
	{
		return name;
	}
void Car::setSerial(string s)
	{
		serial = s;

	}
string Car::getSerial()
	{
		return serial;
	}
void Car::setBodyType(string b)
	{
		bodyType = b;
	}
string Car::getBodyType()
	{
		return bodyType;
	}

void Car::setEngine(Engine en)
	{

		engine = en;
	}
Engine Car::getEngine()
	{

		return engine;

	}
void Car::printInfo()
	{
		cout << "~ ~ ~ ~Car~ ~ ~ ~\n";
		cout << "Name:" << getName() << endl;
		cout << "\nSerial :" << getSerial() << endl;
		cout << "\nbodyType:" << getBodyType() << endl;
		for (int i = 0; i < size; i++)
			seats[i].printInfo();

		for (int i = 0; i < size; i++)
			windows[i].printInfo();
	}
