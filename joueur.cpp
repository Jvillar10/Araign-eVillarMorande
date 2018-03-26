#include "joueur.h"
#include <string>
#include <iostream>
using namespace std;

Joueur::Joueur(string nom_Joueur, bool etat)

{
    nom = nom_Joueur ;
    if(etat)
    {
        activation_Joueur() ;
    }
    else
    {
        desactivation_Joueur() ;
    }
}

void Joueur::activation_Joueur()
{
    Joueur_actuel = true ;
}

void Joueur::desactivation_Joueur()
{
    Joueur_actuel = false ;
}

bool Joueur::etat_Actif()
{
    return Joueur_actuel ;
}

string Joueur::getNom()
{
    return nom ;
}
