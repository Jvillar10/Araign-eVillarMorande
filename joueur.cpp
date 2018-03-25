#include "joueur.h"
#include <string>
#include <iostream>
using namespace std;

Joueur::Joueur(string nom_Joueur, bool etat)

{
    nom = nom_Joueur ;
    if(etat)
    {
        //activation_Joueur() ;
    }
    else
    {
        //desactivation_Joueur() ;
    }
}
