//Maftuna Sharabbaeva U1510067  007
#include <cstring>
using namespace std;

#ifndef SEAT_H
#define SEAT_H
class Seat
{
public:
	Seat(string="4 chairs");
	void setCoverType(string);
	string getCoverType();
	void printInfo();
private:
	string coverType;
};

#endif