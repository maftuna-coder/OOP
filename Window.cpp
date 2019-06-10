//Maftuna Sharabbaeva U1510067  007
#include <iostream>
using namespace std;

#include "Window.h"
Window::Window(bool i) 
:isTurnedOn(i)
	{
	i = isTurnedOn;
	}
void Window::setIsTurnedOn(bool i)
	{
		i = isTurnedOn;
	}
bool Window::getIsTurnedOn()
	{

		return isTurnedOn;
	}
	void Window::printInfo()
	{
		cout << "\n~ ~ ~Window~ ~ ~\n";
		cout << "\nIsTurnedOn:" << getIsTurnedOn() << endl;
	}