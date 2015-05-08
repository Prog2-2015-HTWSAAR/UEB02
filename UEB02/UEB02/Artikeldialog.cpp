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

void Artikeldialog::testeBucheAbgang(){
	cout << "Starte Test zur Buchung eines Abgangs..." << endl;
}

void Artikeldialog::testeBucheZugang(){
	cout << "Starte Test zur Buchung eines Zugangs..." << endl;
}

void Artikeldialog::testeSetArtikelNr(){
	cout << "Starte Test zum Setzen einer ArtikelNummer..." << endl;
}

void Artikeldialog::testeSetBestand(){
	cout << "Starte Test zum Setzen des Bestands eines Artikels..." << endl;
}
void Artikeldialog::testeSetBezeichnung(){
	cout << "Starte Test zum Setzen der Bezeichnung eines Artikels..." << endl;
}
void Artikeldialog::testeAlles(){
	cout << "Starte alle Tests..." << endl;
	testeConstructor2();
	testeConstructor3();
	testeBucheAbgang();
	testeBucheZugang();
	testeSetArtikelNr();
	testeSetBestand();
	testeSetBezeichnung();
}


