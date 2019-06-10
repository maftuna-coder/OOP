//Maftuna Sharabbaeva U1510067  007
#include <iostream>
using namespace std;
#include "Engine.h"
	
Engine::Engine(string e, int f) 
:engineType(e), fuelCons100km(f)
	{

	}
void Engine::setEngineType(string e)
	{
		engineType = e;
	}
string Engine::getEngineType()
	{
		return engineType;
	}
void Engine::setFuelCons100km(int f)
	{

		fuelCons100km = f;
	}
int Engine::getFuelCons100km()
	{

		return fuelCons100km;
	}
void Engine::printInfo()
	{
		cout << "\n~ ~ ~Engine~ ~ ~\n";
		cout << " \n Engine type:" << getEngineType() << endl;
		cout << "\n                       Fuel Cosumption per 100KM:" << getFuelCons100km() << endl;
	}

