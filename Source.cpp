//Maftuna Sharabbaeva U1510067  007
#include<string>
#include<iostream>
using namespace std;
#include"Car.h"

int main()
{
	Seat bir("Triangular");
	Seat ikki("Tortburchak");
	Window uch(1);
	Window tort(0);
	Window windowArray[2] = { uch, tort };
	Seat seatArray[2] = {bir, ikki};
	Engine second("Square", 55);
	
	Car main("Laptiva", "1111", "shorter", seatArray, second, windowArray);
	main.printInfo();
	seatArray->printInfo();
	second.printInfo();
	windowArray->printInfo();
	return 0;
}

