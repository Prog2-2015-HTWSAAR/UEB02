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

void Artikel::setArtikelNr(int neuArtikelNr){
	artikelNr = neuArtikelNr;
}
void Artikel::setBezeichnung(string bezeichnung){
	bezeichnung = bezeichnung;
}
void Artikel::setBestand(int neuBestand){
	bestand = neuBestand;
}

void Artikel::ausgeben(){
	cout << "Artikelnummer: " << artikelNr
		<<	"\nBezeichnung: " << bezeichnung
			<< "\naktl. Bestand: " << bestand << endl;
}

