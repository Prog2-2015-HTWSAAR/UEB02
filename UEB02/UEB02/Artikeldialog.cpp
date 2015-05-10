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

#define TESTNR 4711
#define TESTBESCHR "Koelsch-Wasser"
#define TESTBESTAND 42
#define TESTABGANG 23
#define TESTZUGANG 21

Artikeldialog::Artikeldialog(){
	// Nothing to do here
}

Artikeldialog::~Artikeldialog(){
	// Nothing to do here
}

void Artikeldialog::testeConstructor2(int artikelNr, string bezeichnung){

	cout << endl << "Starte Test zum Erstellen eines Artikels ohne Bestand..." << endl;
	cout << "Nutze folgende Werte:" << endl;
	cout << "Artikelnummer:  " << artikelNr << endl;
	cout << "Bezeichnung: " << bezeichnung << endl;

	Artikel artikel(artikelNr,bezeichnung);

	cout << endl << "Erstellter Artikel:" << endl;
	artikel.ausgeben();
}


void Artikeldialog::testeConstructor3(int artikelNr, string bezeichnung, int bestand){

	cout << endl << "Starte Test zum Erstellen eines Artikels mit Bestand..." << endl;
	cout << "Nutze folgende Werte:" << endl;
	cout << "Artikelnummer:  "<< artikelNr << endl;
	cout << "Bezeichnung: " << bezeichnung << endl;
	cout << "Bestand: " << bestand << endl;

	Artikel artikel(artikelNr,bezeichnung,bestand);

	cout << endl << "Erstellter Artikel:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeBucheAbgang(Artikel artikel){
	int menge = TESTABGANG;

	cout << endl << "Starte Test zur Buchung eines Abgangs..." << endl;

	cout << "Der Abgang umfasst "<< menge << " Artikel!" << endl;

	cout << "Artikel vor Abgang:" << endl;
	artikel.ausgeben();

	artikel.bucheAbgang(menge);

	cout << endl << "Artikel nach Abgang:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeBucheZugang(Artikel artikel){
	int menge=TESTZUGANG;

	cout << endl << "Starte Test zur Buchung eines Zugangs..." << endl;

	cout << "Der Zugang umfasst " << menge << " Artikel!" << endl;

	cout << "Artikel vor Zugang:" << endl;
	artikel.ausgeben();

	artikel.bucheZugang(menge);

	cout << endl << "Artikel nach Zugang:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeSetArtikelNr(Artikel artikel){
//	not implemented
//	cout << endl << "Starte Test zum Setzen einer ArtikelNummer..." << endl;

}

void Artikeldialog::testeSetBestand(Artikel artikel){
	int bestand = TESTBESTAND;
	cout << endl << "Starte Test zum Setzen des Bestands eines Artikels..." << endl;

	cout << "Der neue Bestand soll " << bestand << " sein!" << endl;

	cout << "Artikel vorher:" << endl;
	artikel.ausgeben();

	artikel.setBestand(bestand);

	cout << endl << "Artikel nachher:" << endl;
	artikel.ausgeben();
}

void Artikeldialog::testeSetBezeichnung(Artikel artikel){
// not implemented
//	cout << endl << "Starte Test zum Setzen der Bezeichnung eines Artikels..." << endl;
}

void Artikeldialog::testeAlles(){
	int artikelNr= TESTNR;
	string beschreibung = TESTBESCHR;
	int bestand = TESTBESTAND;
	Artikel artikel(artikelNr,beschreibung,bestand);

	cout << endl << "Starte alle Tests..." << endl;
	testeConstructor2(artikelNr, beschreibung);
	testeConstructor3(artikelNr, beschreibung, bestand);
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
	string bezeichnung;
	do {
		cout << "-------------------------------" << endl;
		cout << "Artikel Nr: " << artikel.getArtikelNr() << endl;
		cout << "Bezeichnung: " << artikel.getBezeichnung() << endl;
		cout << "Bestand: " << artikel.getBestand() << endl;
		cout << "-------------------------------" << endl;
		cout << "(1) SET - Bezeichnung" << endl;
		cout << "(2) SET - Bestand" << endl << endl;
		cout << "(3) BUCHE - Abgang" << endl;
		cout << "(4) BUCHE - Zugang" << endl << endl;
		cout << "(0) -BACK and delete Data-" << endl << endl;
		cout << "Waehlen sie eine Option: ";
		cin >> answer;
		switch (answer){
		case 0: 
			break;
		case 1:
			cout << "Bezeichnung: ";
			cin >> bezeichnung;
			artikel.setBezeichnung(bezeichnung);
			break;
		case 2: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.setBestand(menge); 
			break;
		case 2: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.bucheAbgang(menge); 
			break;
		case 3: 
			cout << "Wert: ";
			cin >> menge; 
			artikel.bucheZugang(menge); 
			break;
		default: cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}


