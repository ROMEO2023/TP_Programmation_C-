
#include "livre.h"
#include "date.h"
#include "auteur.h"
#include <cassert> 





Livre::Livre(std::string titre,Auteur auteur, std::string langue, std::string genre, Date publication, std::string ISBN, std::vector<std::string> predecesseur, bool dispo) : _titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _publication(publication), _ISBN(ISBN), _predecesseur(predecesseur), _dispo(dispo) {
}

std::string Livre::titre() const {
	return _titre;
}

Auteur Livre::auteur() const {
	return _auteur;
}

std::string Livre::langue() const {
	return _langue;
}

std::string Livre::genre() const {
	return _genre;
}

std::string Livre::ISBN() const {
	return _ISBN;
}

Date Livre::publication() const {
	return _publication;
}

std::vector<std::string> Livre::predecesseur() const {
	return _predecesseur;
}

bool Livre::dispo() {
  return _dispo;
}

void Livre::updateTitre(std::string titre) {
    _titre = titre;
}

void Livre::updateGenre(std::string genre) {
    _genre = genre;
}

void Livre::updateAuteur(Auteur auteur) {
    _auteur = auteur;
}
void Livre::updateLangue(std::string langue) {
    _langue = langue;
}
void Livre::updateISBN(std::string ISBN) {
    _ISBN = ISBN;
}
void Livre::updatePublication(Date publication) {
    _publication = publication;
}
void Livre::updatePredecesseur(std::vector<std::string> predecesseur) {
    _predecesseur = predecesseur;
}
void Livre::updateDispo(bool dispo) {
    _dispo = dispo;
}



/**
 * 
 * Helper functions 
 * 
*/ 
std::string Liste(std::vector<std::string> lst){
   std::string liste_complete("");
   std::vector<std::string>::const_iterator it;
   it = lst.begin();
   while(it != lst.end()) {
     liste_complete.append(*it);
     liste_complete.append(" ");
     it++;
  }
  return liste_complete;
}

std::string Affichage(Livre l) {
    return(l.titre() + " " + Nom(l.auteur()) + " " + l.langue() + " " + l.genre() + " " + toString(l.publication()) + " " + l.ISBN() + " " + Liste(l.predecesseur()));
}






