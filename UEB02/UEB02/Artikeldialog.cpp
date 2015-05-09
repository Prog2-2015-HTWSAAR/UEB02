//// NOPE IN BEARBEITUNG
/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb01 *.o
* @file Artikeldialog.cpp
* @Author Andreas Schreiner & Simon Bastian
*
* @date 08.05.2015
*
* Artikeldialog Funktionen
*

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
	cout << "Artikelnummer:  ";
	cin >> artikelNr;
	cout << "Bezeichnung: ";
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
void Artikeldialog::dialog(){
	int answer;
	do {
		cout << "-------------------------------" << endl;
		cout << "(1) Automatischer Test" << endl;
		cout << "(2) Manueller Test 3 param" << endl;
		cout << "(3) Manueller Test 2 param" << endl;
		cout << "(0) -EXIT-" << endl << endl;
		cout << "Waehlen sie eine Option: ";
		cin >> answer;
		switch (answer){
		case 0: 
			cout << "ENDE" << endl; 
			break;
		case 1:	
			testeAlles(); 
			break;
		case 2: 
			createArtikelComplete();
			break;
		case 3:
			createArtikelTwoParam();
			break;
		default: 
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}

void Artikeldialog::createArtikelComplete(){
	int artikelNr;
	string bezeichnung;
	int menge = 0;
	cout << "Artikel Erstellen" << endl << "Artikel Nr. ";
	cin >> artikelNr;
	cout << "Bezeichnung. ";
	cin >> bezeichnung;
	cout << "Bestand. ";
	cin >> menge;
	Artikel artikel(artikelNr, bezeichnung, menge);
	manuell(artikel);
}

void Artikeldialog::createArtikelTwoParam(){
	int artikelNr;
	string bezeichnung;
	cout << "Artikel Erstellen" << endl << "Artikel Nr. ";
	cin >> artikelNr;
	cout << "Bezeichnung. ";
	cin >> bezeichnung;
	Artikel artikel(artikelNr, bezeichnung);
	manuell(artikel);
}

void Artikeldialog::manuell(Artikel artikel){
	int answer;
	int menge;
	do {
		cout << "-------------------------------" << endl;
		cout << "Artikel Nr. " << artikel.getArtikelNr() << endl;
		cout << "Bezeichnung. " << artikel.getBezeichnung() << endl;
		cout << "Bestand. " << artikel.getBestand() << endl;
		cout << "-------------------------------" << endl;
		cout << "(6) SET - Bestand" << endl << endl;
		cout << "(7) BUCHE - Abgang" << endl;
		cout << "(8) BUCHE - Zugang" << endl << endl;
		cout << "(0) -BACK and delete Data-" << endl << endl;
		cout << "Waehlen sie eine Option: ";
		cin >> answer;
		switch (answer){
		case 0: 
			break;
		case 6: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.setBestand(menge); 
			break;
		case 7: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.bucheAbgang(menge); 
			break;
		case 8: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.bucheZugang(menge); 
			break;
		default: cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}


