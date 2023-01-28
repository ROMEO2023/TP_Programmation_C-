#include <cassert> 
#include <vector>
#include "lecteur.h"



Lecteur::Lecteur(std::string id, std::string nom,std::string prenom,std::vector<Livre> emprunte): _id(id), _nom(nom), _prenom(prenom), _emprunte(emprunte){
}

std::string Lecteur::id() const {
	return _id;
}

std::string Lecteur::nom() const {
	return _nom;
}

std::string Lecteur::prenom() const {
	return _prenom;
}

std::vector<Livre> Lecteur::emprunte() const {
	return _emprunte;
}

void Lecteur::updateEmprunte(std::vector<Livre> emprunte) {
    _emprunte = emprunte;
}

/**
 * 
 * Helper functions 
 * 
*/

std::string Liste_ISBN(std::vector<std::string> lst){
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

std::string Affichage_lect(Lecteur lecteur) {
    return(lecteur.id() + " " + lecteur.nom() + " " + lecteur.prenom() + " " + Liste_ISBN(lecteur.emprunte()));
}


