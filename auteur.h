#include <iostream>
#include "date.h"

#ifndef AUTEUR_H
#define AUTEUR_H

class Auteur {
public:
   Auteur(std::string id_num, std::string nom, std::string prenom, Date naissance);
   std::string id_num() const;
   std::string nom() const;
   std::string prenom() const;
   Date naissance() const;
private:
   std::string _id_num;
   std::string _nom;
   std::string _prenom;
   Date _naissance;
   
};

std::string Nom(Auteur aut);

#endif 

