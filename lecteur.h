#include <iostream>
#include "livre.h"

#ifndef LECTEUR_H
#define LECTEUR_H

class Lecteur {
public:
   Lecteur(std::string id, std::string nom, std::string prenom, std::vector<Livre> emprunte);
   std::string id() const;
   std::string nom() const;
   std::string prenom() const;
   std::vector<Livre> emprunte() const;
   void updateEmprunte(std::vector<Livre> emprunte);
private:
   std::string _id;
   std::string _nom;
   std::string _prenom;
   std::vector<Livre> _emprunte;
   
};


std::string Liste_ISBN(Lecteur lst);

std::string Affichage_lect(Lecteur lecteur);
#endif 

