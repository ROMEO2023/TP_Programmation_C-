#include <cassert> 
#include "bibliotheque.h"


Bibliotheque::Bibliotheque(std::vector<Livre> list_livre, std::vector<Lecteur> list_lecteur, std::vector<Emprunt> list_emprunt): _list_livre(list_livre),_list_lecteur(list_lecteur), _list_emprunt(list_emprunt){
}

std::vector<Livre> Bibliotheque::list_livre() {
	return _list_livre;
}

std::vector<Lecteur> Bibliotheque::list_lecteur() {
	return _list_lecteur;
}

std::vector<Emprunt> Bibliotheque::list_emprunt() {
	return _list_emprunt;
}



/**
 * 
 * Helper functions 
 * 
*/


void addLivre(Bibliotheque bibliotheque, Livre livre){
	bibliotheque.list_livre().push_back(livre);

}

void addLecteur(Bibliotheque bibliotheque, Lecteur lecteur){
	bibliotheque.list_lecteur().push_back(lecteur);

}

void addEmprunt(Bibliotheque bibliotheque, Emprunt emprunt){
	bibliotheque.list_emprunt().push_back(emprunt);

}

void emprunt(Livre l, Lecteur lect){

	if(l.dispo() == true){
		l.updateDispo(false);
		lect.emprunte().push_back(l.titre());
		lect.updateEmprunte (l);
	}else{
		std::cout<< "ce livre n'est pas disponible" << std::endl;
	}
}


void restitution(Livre l, Lecteur lect, Bibliotheque b){

	for(int i = 0; i< lect.emprunte.size(); ++i){
		if (l == lect.emprunte(i)){
			l.updateDispo(true);
			lect.emprunte().pop_back();
			b.list_livre().push_back(l);
		}
		else :
			std::cout << "Le livre n'est pas emprunté par le lecteur" << std::endl;
}


