#include <iostream>
#include <fstream>


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
	void wypisz(ofstream plik){
		plik << "nazwa: " << Nazwa << endl;
		plik << "Miejsce: " << Miejsce << endl;
		plik << "Data: " << Data << endl;
	}

	string getNazwa(){ return Nazwa; }
	string getMiejsce(){ return Miejsce; }
	string getTrasa(){ return Trasa; }
	char getPoziom(){ return Poziom; }
	char getKolejnosc(){ return Kolejnosc; }
	char getSrodek(){ return Srodek; }
	char getTyp(){ return Typ; }
	int getDystans(){ return Dystans; }
	int getCzas(){ return Czas; }
	string getStrona(){ return Strona; }
	string getData(){ return Data; }


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