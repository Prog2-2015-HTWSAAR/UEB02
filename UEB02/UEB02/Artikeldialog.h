/*
 * Artikeldialog.h
 *
 *  Created on: 05.05.2015
 *      Author: sbastian
 */

#ifndef ARTIKELDIALOG_H_
#define ARTIKELDIALOG_H_
#include "Artikel.h"
#include "ueb02.h"
class Artikeldialog {
public:
	Artikeldialog();
	virtual ~Artikeldialog();
	/**
	 * Test des Konstruktors mit zwei Argumenten
	 * @param artikelNr
	 * @param bezeichnung
	 */
	void testeConstructor2(int artikelNr, string bezeichnung);
	/**
	 * Test des Konstruktors mit drei Argumenten
	 * @param artikelNr
	 * @param bezeichnung
	 * @param bestand
	 */
	void testeConstructor3(int artikelNr, string bezeichnung, int bestand);
	/**
	 * Test der Zugangsbuchung eines Artikels
	 * @param artikel
	 */
	void testeBucheZugang(Artikel artikel);
	/**
	 * Test der Abgangsbuchung eines Artikels
	 * @param artikel
	 */
	void testeBucheAbgang(Artikel artikel);
	/** remove?
	 * Test des Setzens der Artikelnummer eines Artikels
	 *
	 */
	void testeSetArtikelNr(Artikel artikel);
	/**
	 * Test des Setzens der Bezeichnung eines Artikels
	 * @param artikel
	 */
	void testeSetBezeichnung(Artikel artikel);
	/**
	 * Test des Setzens des Bestands eines Artikels
	 * @param artikel
	 */
	void testeSetBestand(Artikel artikel);
	/**
	 * Ausführung aller Tests
	 */
	void testeAlles();
	/**
	 * Dialog zur Auswahl zwischen automatischen Tests und manuellem Testen
	 */
	void dialog();
	/**
	 * Interaktiver Test eines Artikels
	 * @param artikel
	 */
	void manuell(Artikel artikel);
	/**
	 * Interaktives Erstellen eines Testartikels mit Bestand
	 * ruft manuell() auf
	 */
	void createArtikelComplete();
	/**
	 * Interaktives Erstellen eines Testartikels ohne Bestand
	 * ruft manuell() auf
	 */
	void createArtikelTwoParam();
};

#endif /* ARTIKELDIALOG_H_ */

