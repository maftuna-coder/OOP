//Maftuna Sharabbaeva U1510067  007
#include <string>
using namespace std;

#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
public:
	Engine(string, int);
	void setEngineType(string);
	string getEngineType();
	void setFuelCons100km(int);
	int getFuelCons100km();
	void printInfo();
private:
	string engineType;
	int fuelCons100km;
};
#endif