#include "auteur.h"
#include "date.h"
#include <cassert> 
#include <iostream>




Auteur::Auteur(std::string id_num, std::string nom,std::string prenom,Date naissance): _id_num(id_num), _nom(nom), _prenom(prenom), _naissance(naissance){
}

std::string Auteur::id_num() const {
	return _id_num;
}

std::string Auteur::nom() const {
	return _nom;
}

std::string Auteur::prenom() const {
	return _prenom;
}

Date Auteur::naissance() const {
	return _naissance;
}

/**
 * 
 * Helper functions 
 * 
*/


std::string Nom(Auteur aut) {
    return(aut.nom() + " " + aut.prenom());
}






