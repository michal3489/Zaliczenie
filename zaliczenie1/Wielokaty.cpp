#include "Wielokaty.h"
Kwadrat::Kwadrat()
{
	float d;// przekatna
	float b1;// bok 
	float v; // objetosc
	Kwadrat kwadrat;
	this->bok1 = b1;
	this->przekatna = d;
	this->objetosc = v;
}

Kwadrat::~Kwadrat()
{

}

void Kwadrat::polekwadratu()
{
	pole = 4 * bok1;
	cout << "Podaj bok kwadratu:\n" << endl;
	cin >> bok1;
	cout << "Pole kwadratu wynosi:\n" << bok1 << endl;
}

void Kwadrat::obwodkwadratu()
{

}

void Kwadrat::przekatnakwadratu()
{

}
void Kwadrat::Bazowa::wyswietl()
{

}
void Kwadrat::Bazowa::objetosc()
{

}