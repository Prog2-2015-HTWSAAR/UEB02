/*
 * Artikeldialog.h
 *
 *  Created on: 05.05.2015
 *      Author: sbastian
 */

#ifndef ARTIKELDIALOG_H_
#define ARTIKELDIALOG_H_

class Artikeldialog {
public:
	Artikeldialog();
	virtual ~Artikeldialog();
	void testeDefaultConstructor();
	void testeValueConstructor();
	void testeBucheZugang();
	void testeBucheAbgang();
	void testeSetArtikelNr();
	void testeSetBezeichnung();
	void testeSetBestand();
	void testeAlles();
};

#endif /* ARTIKELDIALOG_H_ */

