#include <string>
using namespace std;
class Bazowa
{
		//zmmienne
public:
		string nazwa;
		float pole;
		float obwod;
		float bok1, bok2, bok3, bok4;


		//konstruktor i destruktor
		Bazowa(string n="", float p=0, float ob=0, float b1=0, float b2=0, float b3=0, float b4=0);
		virtual ~Bazowa();

		//metody
		void policzpole();
		void policzobwod();
};


