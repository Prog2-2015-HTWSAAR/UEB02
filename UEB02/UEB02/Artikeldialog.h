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
	void testeConstructor2();
	void testeConstructor3();
	void testeBucheZugang(Artikel artikel);
	void testeBucheAbgang(Artikel artikel);
	void testeSetArtikelNr(Artikel artikel);
	void testeSetBezeichnung(Artikel artikel);
	void testeSetBestand(Artikel artikel);
	void testeAlles();
	void dialog();
	void manuell(Artikel countParam);
	void Artikeldialog::createArtikelComplete();
	void Artikeldialog::createArtikelTwoParam();
};

#endif /* ARTIKELDIALOG_H_ */

