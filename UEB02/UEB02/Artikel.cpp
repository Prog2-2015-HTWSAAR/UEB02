/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb01 *.o
* @file Artikel.cpp
* @Author Andreas Schreiner & Simon Bastian
*
* @date 08.05.2015
*
* Artikel Funktionen
*
*/
#include "Artikel.h"
#include "ueb02.h"

Artikel::Artikel(int artikelNr, string bezeichnung){
	this->artikelNr = artikelNr;
	this->bezeichnung = bezeichnung;
	this->bestand = 0;
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

void Artikel::ausgeben(){
	cout << "Artikelnummer: " << artikelNr
		<<	"\nBezeichnung: " << bezeichnung
			<< "\naktl. Bestand: " << bestand << endl;
}

