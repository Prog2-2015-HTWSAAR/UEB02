#ifndef ARTIKEL_H_
#define ARTIKEL_H_
#include "ueb02.h"

class Artikel {
public:
	Artikel(int artikelNr, string bezeichnung, int bestand);	
	Artikel(int artikelNr, string bezeichnung);
	
	void bucheZugang(int menge);
	void bucheAbgang(int menge);
	void setArtikelNr(int artikelNr);
	void setBestand(int neuBestand);
	void setBezeichnung(string bezeichnung);

	int getArtikelNr(){
		return artikelNr;
	}
	string getBezeichnung(){
		return bezeichnung;
	}
	int getBestand(){
		return bestand;
	}
	void ausgeben();
private:
	int artikelNr;
	string bezeichnung;
	int bestand;

};


#endif 

