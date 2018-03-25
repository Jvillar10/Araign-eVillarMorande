#include "jeu.h"
#include <iostream>
using namespace std;

Jeu::Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent): QObject(parent),Joueur1(nom_Joueur1,true),Joueur2(nom_Joueur2,false)
{
    tours_compt = 0 ;
    jetonsListe = new jetons[6] ;
    victoire = false ;
}

