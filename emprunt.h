#include <iostream>
#include "date.h"

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
public:
   Emprunt(Date date, std::string ISBN_livre, std::string id_lecteur);
   std::string ISBN_livre() const;
   std::string id_lecteur() const;
   Date date() const;
   void updateDate(Date date);
   void updateID(std::string id_lecteur);
private:
   Date _date;
   std::string _ISBN_livre;
   std::string _id_lecteur;
   
};

std::string Affichage_emprunt(Emprunt emprunt);

#endif 

