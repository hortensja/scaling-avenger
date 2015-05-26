#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "baza.h"

using namespace std;

vector<BazaInO> wczytaj(vector<BazaInO> baza){

	string nazwa;
	string miejsce;
	string trasa;
	char typ;
	char srodek;
	int dystans;
	int czas;
	string data;
	char poziom;
	char kolejnosc;
	string strona;

	int n = 0;

	ifstream dane("DaneoRajdach.txt");
	ofstream what("what.txt");

	//POPRAW TO
	while (!dane.eof())
	{

		dane >> nazwa;
		dane >> miejsce;
		dane >> typ;
		dane >> trasa;
		dane >> srodek;
		dane >> dystans;
		dane >> czas;
		dane>> data;
		dane >> poziom;
		dane >> kolejnosc;
		dane >> strona;
		BazaInO b = BazaInO(nazwa, miejsce, typ, trasa, srodek, dystans, czas, data, poziom, kolejnosc, strona);
		baza.push_back(b);
		what <</* baza.size() <<*/ baza.back().getNazwa() << '\t' << baza.back().getMiejsce() << "\ttyp: " << baza.back().getTyp() << "\tTrasa: " << baza.back().getTrasa() << "\tsrodek: " << baza.back().getSrodek() << "\tdyst: " << baza.back().getDystans() << "\tczas:" << baza.back().getCzas() << "\tdata:" << baza.back().getData() << "\tpoziom:" << baza.back().getPoziom() <<"\tkolej: "<< baza.back().getKolejnosc() << "\tstrona: " << baza.back().getStrona()<<endl;
		//baza.back().wypisz(what);
		//++n;
	}
	return baza;
}


bool porownaj(const BazaInO &b, const Zapytanie &q){

	if (q.Typ != 'U' && q.Typ != b.Typ)
		return false;
	if (q.Srodek != 'U' && q.Srodek != b.Srodek)
		return false;
	if (q.Kolejnosc != 'U' && q.Kolejnosc != b.Kolejnosc)
		return false;
	if (q.Poziom != 'U' && q.Poziom != b.Poziom)
		return false;
	if (b.Dystans<q.DystansMin || b.Dystans>q.DystansMax)
		return false;

	return true;
}