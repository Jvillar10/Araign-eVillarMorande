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
        changePos() ;
        changeBord() ;
        changeVis() ;
        //changeTexte() ;
    }
}

void Jeu::premiere_Etape(int slot)
{
    jetonsListe[tours_compt] = jetons(tours_compt % 2, slot) ;
}

void Jeu::seconde_Etape(int slot)
{
    bool existsalready = false, occupiedalready = false ;
    for(int i = 0 ; i < 6 ; i++)
    {
       if(slot == jetonsListe[i].getPosition() && tours_compt % 2 == i % 2)
       {
           existsalready = true ;
           for(int j = 0 ; j < 6 ; j++)
           {
               if(jetonsListe[j].getSelected() == true)
               {
                   jetonsListe[j].setSelected(false) ;
               }
           }
           jetonsListe[i].setSelected(true) ;
        }
    }
    if (existsalready == false)
    {
        for(int k = 0 ; k < 6 && k < tours_compt ; k++)
        {
            if(slot == jetonsListe[k].getPosition()) occupiedalready = true ;
        }
        if(occupiedalready == false)
        {
            for(int l = 0 ; l < 6 ; l++)
            {
                if(jetonsListe[l].getSelected() == true)
                {
                    jetonsListe[l].setPosition(slot) ;
                    tours_compt++ ;
                }
            }
        }
    }
}

void Jeu::victoire()
{
    int i ;
    int* caseJ1 = new int[3] ;
    int* caseJ2 = new int[3] ;
    if(tours_compt >= 5)
    {
        for(int j = 0 ; j < 6 && j < tours_compt ; j++)
        {
            i = j / 2 ;
            if(j % 2 == 0)
            {
                caseJ1[i] =jetonsListe[j].getPosition() ;
            }
            else
            {
                caseJ2[i] = jetonsListe[j].getPosition() ;
            }
        }
        /*if (tours_compt % 2 == 1) testVictoire(caseJ1) ;
        else testVictoire(caseJ2) ;
        delete[] caseJ1 ;
        delete[] caseJ2;*/
    }
}

QList<QString> Jeu::readPos()
{
    QList<QString> positions ;
    for(int i = 0 ; i < 9 ; i++)
    {
        positions << "#ffffff" ;
    }
    for(int j = 0 ; j < 6 && j < tours_compt ; j++)
    {
        if(j % 2 == 0)
        {
            positions[jetonsListe[j].getPosition()] = "#cccccc" ;
        }
        else
        {
            positions[jetonsListe[j].getPosition()] = "#000000" ;
        }
    }
    return positions ;
}

/*QList<QString> Jeu::readBord()
    {
        QList<QString> bordure ;
        for(int i = 0 ; i < 9 ; i++)
        {
            bordure << "#ffffff" ;
        }
        for(int j = 0 ; j < 6 && j < tours_compt ; j++)
        {
            if(j % 2 == 0)
            {
                bordure[jetonsListe[j].getPosition()] = "#000000" ;
            }
            else
            {
                bordure[jetonsListe[j].getPosition()] = "#cccccc" ;
            }
        }
        return bordure ;
    }*/

QList<bool> Jeu::readVis()
{
    QList<bool> visible ;
    for(int i = 0 ; i < 9 ; i++)
    {
        visible << false ;
    }
    for(int j = 0 ; j < 6 && j < tours_compt ; j++)
    {
        visible[jetonsListe[j].getPosition()] = true ;
    }
    return visible ;
}

int Jeu::getTour()
{
    return tours_compt ;
}
/*QString Jeu::currentText()
{
    return message.getText(tours_compt, victoire_jeu) ;
}*/
