/*
 * Artikeldialog.cpp
 *
 *  Created on: 05.05.2015
 *      Author: sbastian
 */

#include "Artikeldialog.h"
#include "ueb02.h"
#include "Artikel.h"

Artikeldialog::Artikeldialog(){
	// Nothing to do here
}

Artikeldialog::~Artikeldialog(){
	// Nothing to do here
}

void Artikeldialog::testeConstructor2(){
	int artikelNr = 0000;
	string bezeichnung = "";

	cout << "Starte Test zum Erstellen eines Artikels ohne Bestand..." << endl;
	cout << "Bitte geben Sie die Werte ein!" << endl;
	cout << "Artikelnummer:  " << endl;
	cin >> artikelNr;
	cout << "Bezeichnung: " << endl;
	cin >> bezeichnung;
	Artikel artikel(artikelNr,bezeichnung);

	cout << endl << "Benutzereingabe:" << endl;
	cout << "Artikelnummer:  " << artikelNr << endl;
	cout << "Bezeichnung: " << bezeichnung << endl;

	cout << endl << "Gespeicherte Daten:" << endl;
	artikel.ausgeben();
}


void Artikeldialog::testeConstructor3(){
	int artikelNr = 0000;
	string bezeichnung = "";
	int bestand = 0;

	cout << "Starte Test zum Erstellen eines Artikels mit Bestand..." << endl;
	cout << "Bitte geben Sie die Werte ein!" << endl;
	cout << "Artikelnummer:  " << endl;
	cin >> artikelNr;
	cout << "Bezeichnung: " << endl;
	cin >> bezeichnung;
	cout << "Bestand: " << endl;
	cin >> bestand;

	Artikel artikel(artikelNr,bezeichnung,bestand);

	cout << "Benutzereingabe:" << endl;
	cout << "Artikelnummer:  " << artikelNr << endl;
	cout << "Bezeichnung: " << bezeichnung << endl;
	cout << "Bestand: " << bestand << endl;

	cout << "Gespeicherte Daten:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeBucheAbgang(Artikel artikel){
	int menge = 0;

	cout << "Starte Test zur Buchung eines Abgangs..." << endl;

	cout << "Wie viele Artikel umfasst der Abgang?" << endl;
	cin >> menge;

	cout << "Artikel vor Abgang:" << endl;
	artikel.ausgeben();

	artikel.bucheAbgang(menge);

	cout << "Artikel nach Abgang:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeBucheZugang(Artikel artikel){
	int menge=0;

	cout << "Starte Test zur Buchung eines Zugangs..." << endl;

	cout << "Wie viele Artikel umfasst der Zugang?" << endl;
	cin >> menge;

	cout << "Artikel vor Zubgang:" << endl;
	artikel.ausgeben();

	artikel.bucheAbgang(menge);

	cout << "Artikel nach Zugang:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeSetArtikelNr(Artikel artikel){
//	not implemented
//	cout << "Starte Test zum Setzen einer ArtikelNummer..." << endl;

}

void Artikeldialog::testeSetBestand(Artikel artikel){
	int bestand = 0;
	cout << "Starte Test zum Setzen des Bestands eines Artikels..." << endl;

	cout << "Wie ist der neue Bestand?" << endl;
	cin >> bestand;

	cout << "Artikel vorher:" << endl;
	artikel.ausgeben();

	artikel.setBestand(bestand);

	cout << "Artikel nachher:" << endl;
	artikel.ausgeben();
}
void Artikeldialog::testeSetBezeichnung(Artikel artikel){
	cout << "Starte Test zum Setzen der Bezeichnung eines Artikels..." << endl;
}
void Artikeldialog::testeAlles(){
	Artikel artikel(4711,"Koelch-Wasser",42);

	cout << "Starte alle Tests..." << endl;
	testeConstructor2();
	testeConstructor3();
	testeBucheAbgang(artikel);
	testeBucheZugang(artikel);
	testeSetArtikelNr(artikel);
	testeSetBestand(artikel);
	testeSetBezeichnung(artikel);
}


