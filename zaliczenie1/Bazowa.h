#include <iostream>
#include <string>

#include <cmath>
using namespace std;
class Bazowa
{
protected:
	string nazwa;
	float pole;
	float obwod;
	float objetosc;
	float bok1, bok2, bok3, bok4;
	Bazowa(string n = "", float p = 0, float ob = 0, float obj =0, float b1 = 0, float b2 = 0, float b3 = 0, float b4 = 0);
	virtual ~Bazowa();
public:
	void wyswietl();
	void objetosc();
};


