#include "jeu.h"
//#include "text.h"
#include "jetons.h"
#include <string>
#include <QObject>
#include <iostream>
using namespace std;

Jeu::Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent): QObject(parent),Joueur1(nom_Joueur1,true),Joueur2(nom_Joueur2,false)
{
    tours_compt = 0 ;
    jetonsListe = new jetons[6] ;
    win_game = false ;
}

void Jeu::pilotage(int slot)
{
    bool existsalready = false;
    if(win_game == false)
    {
        if (tours_compt < 6)
        {
            for(int i = 0 ; i < tours_compt ; i++)
            {
                if(slot == jetonsListe[i].getPosition()) existsalready = true ;
            }
            if (existsalready == false)
            {
                premiere_Etape(slot) ;
                tours_compt++ ;
            }
        }
        else
        {
            Jeu::seconde_Etape(slot) ;
        }
        victoire() ;
        /*changePos() ;
        changeBord() ;
        changeVis() ;
        changeTexte() ;*/
    }
}

void Jeu::premiere_Etape(int slot)
{
    jetonsListe[tours_compt] = jetons(tours_compt % 2, slot) ;
}

/*void Jeu::seconde_Etape(int slot)
{
    bool existsalready = false, occupiedalready = false ;
    for(int i = 0 ; i < 6 ; i++)
    {
       if(slot == pieceListe[i].getPosition() && tours_compt % 2 == i % 2)
       {
           existsalready = true ;
           for(int j = 0 ; j < 6 ; j++)
           {
               if(pieceListe[j].getSelected() == true)
               {
                   pieceListe[j].setSelected(false) ;
               }
           }
           pieceListe[i].setSelected(true) ;
        }
    }
    if (existsalready == false)
    {
        for(int k = 0 ; k < 6 && k < tours_compt ; k++)
        {
            if(slot == pieceListe[k].getPosition()) occupiedalready = true ;
        }
        if(occupiedalready == false)
        {
            for(int l = 0 ; l < 6 ; l++)
            {
                if(pieceListe[l].getSelected() == true)
                {
                    pieceListe[l].setPosition(slot) ;
                    tours_compt++ ;
                }
            }
        }
    }
}*/

