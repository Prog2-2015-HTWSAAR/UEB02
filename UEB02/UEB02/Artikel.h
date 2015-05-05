#ifndef ARTIKEL_H_
#define ARTIKEL_H_
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Artikel {
public:
	Artikel(int artikelNr, string bezeichnung, int bestand);	
	Artikel();
	void bucheZugang(int menge);
	void bucheAbgang(int menge);
	void setBestand(int neuBestand);

	int getArtikelNr(){
		return artikelNr;
	}
	string getBezeichnung(){
		return bezeichnung;
	}
	int getBestand(){
		return bestand;
	}
private:
	int artikelNr;
	string bezeichnung;
	int bestand;

};


#endif 

