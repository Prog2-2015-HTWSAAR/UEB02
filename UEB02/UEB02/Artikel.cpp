#include "Artikel.h"
#include <string>
#include <cstring>

using namespace std;

void Artikel::bucheZugang(int menge){
	bestand += menge;
}

void Artikel::bucheAbgang(int menge){
	bestand -= menge;
}

void Artikel::setBestand(int neuBestand){
	bestand = neuBestand;
}

