#ifndef ARTIKEL_H_
#define ARTIKEL_H_
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void bucheZugang();
void bucheAbgang();
int getArtikelNr();
string getBezeichnung();
int getBestand();
void setBestand();

class Artikel {
private:
	int artikelNr;
	string bezeichnung;
	int bestand;
};

#endif 

