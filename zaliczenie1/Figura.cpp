#include "Figura.h"

using namespace std;

//konstruktor
Figura::Figura(string n, float p, float ob, float b1, float b2, float b3, float b4)
{
	this->nazwa = n;
	this->pole = p;
	this->obwod = ob;
	this->bok1 = b1;
	this->bok2 = b2;
	this->bok3 = b3;
	this->bok4 = b4;
}

//destruktor
Figura::~Figura()
{
	;
}

void Figura::policzpole()
{
}

void Figura::policzobwod()
{
}