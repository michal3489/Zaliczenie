#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Figura
{
	//zmmienne
public:
	string nazwa;
	float pole;
	float obwod;
	float bok1, bok2, bok3, bok4;


	//konstruktor i destruktor
	Figura(string n, float p, float ob, float b1, float b2, float b3, float b4);
	~Figura();

	//metody
	void policzpole();
	void policzobwod();
};
