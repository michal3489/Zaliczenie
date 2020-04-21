#include <iostream>
#include "Bazowa.h"

using namespace std;

class Figura:protected Bazowa
{
	void policzpole()
	{
		this->pole = p1;
		this->bok1 = b1;
		this->bok2 = b2;
		this->bok3 = b3;
		this->bok4 = b4;
		this->pp = pp;
		this->pb = pb;
		if (b1*b2 > 0) {
			pp = (b1 * b2) * 2;
			pb = 4 * (b3 * b4);
			p1 = pp + pb;
			printf("pole figury to %f" + sp1)
		}
		else: 
		prinf("B³¹d nie mo¿na policzyæ pola bez pola podstawy");
	}
	void policzobwod()
	{

	}
	
};
