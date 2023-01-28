/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Course:   C-C++ Programming / Validation 3A Informatique Electronique Robotique
  * @Summary:  Methods - Helpers functions
  */

#include "date.h"
#include "auteur.h"
#include "bibliotheque.h"
#include "livre.h"
#include "emprunt.h"
#include "lecteur.h"
#include <iostream>
#include <vector>



//std::string List(std::list<std::string> emprunte){
//   for (std::string x : emprunte){
//    std::cout << x << std::endl;
//   }
//}

int main(){
Date Publi(12,12,2020);
Date Naissance(1,1,2001);

std::vector<Livre> emprunte= {HP1, HP2};
std::vector<livre> emprunte2= { HP2};
std::vector<std::string> predecesseur = {"Jean", "Jacques"};


Auteur JK("46435","Joanne", "Rowling", Naissance);
Livre HP("HP",JK, "Français", "Magie", Publi, "88646", predecesseur, true);
Livre HP1("HP1",JK1, "Maths", "science", Publi, "65656", predecesseur, true);
Livre HP2("HP2",JK2, "elect", "science", Publi, "21132", predecesseur, true);
Lecteur Moi("78436", "Koularambaye", "Romeo", emprunte);
Livre HP("HP",JK, "Français", "Magie", Publi, "88646", predecesseur, true);
Lecteur Lui("46163", "Naruto", "uzumaki", emprunte2);
emprunt(HP, Lui);
/*std::cout << Affichage_lect(Moi) << std::endl;*/
  return 0;

}

