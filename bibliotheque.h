#include <iostream>
#include <vector>
#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"

#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

class Bibliotheque {
public:
   Bibliotheque(std::vector<Livre> list_livre, std::vector<Lecteur> list_lecteur, std::vector<Emprunt> list_emprunt);
   std::vector<Livre> list_livre();
   std::vector<Lecteur> list_lecteur();
   std::vector<Emprunt> list_emprunt();
   void updateLivre(Livre livre);
   void updateLecteur(Lecteur lecteur);
   void updateEmprunt(Emprunt emprunt);

private:
   std::vector<Livre> _list_livre;
   std::vector<Lecteur> _list_lecteur;
   std::vector<Emprunt> _list_emprunt;
   
};

void addLivre(Bibliotheque bibliotheque, Livre livre);
void addLecteur(Bibliotheque bibliotheque, Lecteur lecteur);
void addEmprunt(Bibliotheque bibliotheque, Emprunt emprunt);
void emprunt(Livre l, Lecteur lect);
void restitution(Livre l, Lecteur lect, Bibliotheque b);



#endif 
