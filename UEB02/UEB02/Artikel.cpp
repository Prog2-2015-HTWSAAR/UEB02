#include "Artikel.h"
#include <string>
#include <cstring>

using namespace std;

Artikel::Artikel(){
	//TESTWERTE
	this->artikelNr = 666;
	this->bezeichnung = "name";
	this->bestand = 11;
}

Artikel::Artikel(int artikelNr,string bezeichnung, int bestand){
	this->artikelNr = artikelNr;
	this->bezeichnung = bezeichnung;
	this->bestand = bestand;
}

void Artikel::bucheZugang(int menge){
	bestand += menge;
}

void Artikel::bucheAbgang(int menge){
	bestand -= menge;
}

void Artikel::setBestand(int neuBestand){
	bestand = neuBestand;
}

