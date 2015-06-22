#pragma once

#include <iostream>

using namespace std;

class BazaInO;

class Zapytanie
{
public:
	Zapytanie(char t, char s, int dmin, int dmax, /*System::DateTime d,*/ char p, char k){
		Typ = t;
		Srodek = s;
		DystansMin = dmin;
		DystansMax = dmax;
		//Data = d;
		Poziom = p;
		Kolejnosc = k;
	};
	~Zapytanie(){};


	char getTyp(){ return Typ; }
	char getSrodek(){ return Srodek; }
	int getDystansMin(){ return DystansMin; }
	int getDystansMax(){ return DystansMax; }
	char getPoziom(){ return Poziom; }
	char getKolejnosc(){ return Kolejnosc; }


	friend bool porownaj(const BazaInO &b, const Zapytanie &q);

private:
	char Typ;
	char Srodek;
	int DystansMin;
	int DystansMax;
	char Poziom;
	char Kolejnosc;

};