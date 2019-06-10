//Maftuna Sharabbaeva U1510067  007
#include <string>
#include <iostream>
using namespace std;

#include "Engine.h"
#include"Seat.h"
#include "Window.h"
#ifndef CAR_H
#define CAR_H
class Car
{
private:
	int static const size = 2;
	string name;
	string serial;
	string bodyType;
	Seat seats[size];
	Engine engine;
	Window windows[size];
public:
	Car(string, string, string, Seat * , Engine, Window *);
	void setName(string);
	string getName();
	void setSerial(string);
	string getSerial();
	void setBodyType(string);
	string getBodyType();
	void setEngine(Engine);
	Engine getEngine();
	void printInfo();
};
#endif