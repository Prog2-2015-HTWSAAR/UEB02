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
	try{
		if (artikelNr / 1 <= 0) {
			throw exception("error_nan_or_negative");
		}
		else{

			this->artikelNr = artikelNr;
			this->bezeichnung = bezeichnung;
			this->bestand = 0;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}

Artikel::Artikel(int artikelNr, string bezeichnung, int bestand){
	try {
		if (artikelNr / 1 <= 0) {
			throw exception("error_nan_or_negative");
		}
		else if (bestand / 1 <= 0) {
			throw exception("error_nan_or_negative");
		}
		else{
			this->artikelNr = artikelNr;
			this->bezeichnung = bezeichnung;
			this->bestand = bestand;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}




void Artikel::bucheZugang(int menge){
	try {
		if (menge / 1 <= 0) {
			throw exception ("error_nan_or_negative");
		}
		else{
			bestand += menge;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}

}

void Artikel::bucheAbgang(int menge){
	try {
		if (menge / 1 <= 0) {
			throw exception("error_nan_or_negative");
		}
		else{
			bestand -= menge;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}

void Artikel::setBestand(int neuBestand){
	try {
		if (neuBestand / 1 <= 0) {
			throw (char*)"error_nan_or_negative";
		}
		else{
			bestand = neuBestand;
		}
	}
	catch (exception e){
		cerr << "NAN or Negative" << endl;
	}
}

void Artikel::setBezeichnung(string neuBezeichnung){
	bezeichnung = neuBezeichnung;
}

void Artikel::ausgeben(){
	cout << "Artikelnummer: " << artikelNr
		<< "\nBezeichnung: " << bezeichnung
		<< "\naktl. Bestand: " << bestand << endl;
}

