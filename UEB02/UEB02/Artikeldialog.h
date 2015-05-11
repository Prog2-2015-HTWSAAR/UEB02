/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb01 *.o
* @file Artikeldialog.h
* @Author Andreas Schreiner & Simon Bastian
*
* @date 08.05.2015
*
* H file
*
*/
#ifndef ARTIKELDIALOG_H_
#define ARTIKELDIALOG_H_
#include "Artikel.h"
class Artikeldialog {
public:
	Artikeldialog();
	virtual ~Artikeldialog();
	/**
	 * @biref Test des Konstruktors mit zwei Argumenten
	 * @param artikelNr
	 * @param bezeichnung
	 */
	void testeConstructor2(int artikelNr, string bezeichnung);
	/**
	 * @biref Test des Konstruktors mit drei Argumenten
	 * @param artikelNr
	 * @param bezeichnung
	 * @param bestand
	 */
	void testeConstructor3(int artikelNr, string bezeichnung, int bestand);
	/**
	 * @biref Test der Zugangsbuchung eines Artikels
	 * @param artikel
	 */
	void testeBucheZugang(Artikel artikel);
	/**
	 * @biref Test der Abgangsbuchung eines Artikels
	 * @param artikel
	 */
	void testeBucheAbgang(Artikel artikel);
	/**
	* @biref Test des Setzens der Bezeichnung eines Artikels
	* @param artikel
	*/
	void testeSetBezeichnung(Artikel artikel);
	/**
	 * @biref Test des Setzens des Bestands eines Artikels
	 * @param artikel
	 */
	void testeSetBestand(Artikel artikel);
	/**
	 * @biref Ausführung aller Tests
	 */
	void testeAlles();
	/**
	 * @birefDialog zur Auswahl zwischen automatischen Tests und manuellem Testen
	 */
	void dialog();
	/**
	 * @biref Interaktiver Test eines Artikels
	 * @param artikel
	 */
	void manuell(Artikel artikel);
	/**
	 * @biref Interaktives Erstellen eines Testartikels mit Bestand
	 * @details ruft manuell() auf
	 */
	void createArtikelComplete();
	/**
	 * @biref Interaktives Erstellen eines Testartikels ohne Bestand
	 * @details ruft manuell() auf
	 */
	void createArtikelTwoParam();
};

#endif /* ARTIKELDIALOG_H_ */

