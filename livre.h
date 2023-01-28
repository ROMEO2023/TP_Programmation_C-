#ifndef LIVRE_H
#define LIVRE_H
#include "date.h"
#include "auteur.h"
#include <vector>

class Livre {
public:
   Livre(std::string titre,Auteur auteur, std::string langue, std::string genre, Date publication, std::string ISBN, std::vector<std::string> predecesseur, bool dispo);
   std::string titre() const;
   Auteur auteur() const;
   std::string langue() const;
   std::string genre() const;
   Date publication() const;
   std::string ISBN() const;
   std::vector<std::string> predecesseur() const;
   bool dispo();
   void updateTitre(std::string titre);
   void updateGenre(std::string genre);
   void updateLangue(std::string langue);
   void updateAuteur(Auteur auteur);
   void updateISBN(std::string ISBN);
   void updatePublication(Date publication);
   void updatePredecesseur(std::vector<std::string> predecesseur);
   void updateDispo(bool dispo);

private:
   std::string _titre;
   Auteur _auteur;
   std::string _langue;
   std::string _genre;
   Date _publication;
   std::string _ISBN;
   std::vector<std::string> _predecesseur;
   bool _dispo;
   
};

std::string Liste(Livre lst);
std::string Affichage(Livre d);

#endif 
