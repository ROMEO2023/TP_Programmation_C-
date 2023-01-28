#include <cassert> 
#include "emprunt.h"
#include "date.h"


Emprunt::Emprunt(Date date, std::string ISBN_livre, std::string id_lecteur): _date(date),_ISBN_livre(ISBN_livre), _id_lecteur(id_lecteur){
}

Date Emprunt::date() const {
	return _date;
}

std::string Emprunt::ISBN_livre() const {
	return _ISBN_livre;
}

std::string Emprunt::id_lecteur() const {
	return _id_lecteur;
}

void Emprunt::updateID(std::string id_lecteur) {
    _id_lecteur = id_lecteur;
}
void Emprunt::updateDate(Date date) {
    _date = date;
}

/**
 * 
 * Helper functions 
 * 
*/


std::string Affichage_emprunt(Emprunt emprunt) {
    return(toString(emprunt.date()) + " " + emprunt.ISBN_livre() + " " + emprunt.id_lecteur());
}

