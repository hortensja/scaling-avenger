#include <iostream>

#include "zapytanie.h"

using namespace std;

class BazaInO
{
public:
	BazaInO(){
		Nazwa = "\n";
		Miejsce = "\n";
		Trasa = "\n";
		Typ = '\n';
		Srodek = '\n';
		Dystans = 0;
		Czas = 0;
		Data = "\n";
		Poziom = '\n';
		Kolejnosc = '\n';
		Strona = "\n";
	}

	BazaInO(string n, string m, char t, string tr, char s, int d, int c, string dt, char p, char k, string u){
		Nazwa = n;
		Miejsce = m;
		Trasa = tr;
		Typ = t;
		Srodek = s;
		Dystans = d;
		Czas = c;
		Data = dt;
		Poziom = p;
		Kolejnosc = k;
		Strona = u;
	}

	friend bool porownaj(const BazaInO &b, const Zapytanie &q);

private:
	string Nazwa;
	string Miejsce;
	string Trasa;
	char Poziom;
	char Kolejnosc;
	char Srodek;
	char Typ;
	int Dystans;
	int Czas;
	string Strona;
	string Data;

};