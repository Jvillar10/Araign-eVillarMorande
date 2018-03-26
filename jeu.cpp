#include "jeu.h"
#include <iostream>
using namespace std;

Jeu::Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent): QObject(parent),Joueur1(nom_Joueur1,true),Joueur2(nom_Joueur2,false)
{
    tours_compt = 0 ;
    jetonsListe = new jetons[6] ;
    victoire = false ;
}

/*void Jeu::pilotage(int slot)
{
    bool existsalready = false;
    if(victoire_jeu == false)
    {
        if (tours_compt < 6)
        {
            for(int i = 0 ; i < tours_compt ; i++)
            {
                if(slot == pieceListe[i].getPosition()) existsalready = true ;
            }
            if (existsalready == false)
            {
                premiere_Etape(slot) ;
                tours_compt++ ;
            }
        }
        else
        {
            jeu::seconde_Etape(slot) ;
        }
        victoire() ;
        changePos() ;
        changeBord() ;
        changeVis() ;
        changeTexte() ;
    }
}*/
