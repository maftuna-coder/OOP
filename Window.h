//Maftuna Sharabbaeva U1510067  007
#include <string>
using namespace std;

#ifndef WINDOW_H
#define WINDOW_H

class Window
{
public:
	Window(bool=0);
	void setIsTurnedOn(bool);
	bool getIsTurnedOn();
	void printInfo();
private:
	bool isTurnedOn;
};
#endif
