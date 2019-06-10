//Maftuna Sharabbaeva U1510067  007
#include <iostream>
#include <string>
using namespace std;
#include "Seat.h"

Seat::Seat(string t) :coverType(t)
{

}
void Seat::setCoverType(string t)
{
	coverType = t;

}
string Seat::getCoverType()
{

	return coverType;
}
void Seat::printInfo()
{
	cout << "\n ~ ~ ~ Seat ~ ~ ~ \n";
	cout << "\nCover type:" << getCoverType() << endl;
}
