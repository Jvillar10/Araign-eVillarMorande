#include "jeu.h"
#include "text.h"
#include "jetons.h"
#include <string>
#include <QObject>
#include <iostream>
using namespace std;

Jeu::Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent): QObject(parent),Joueur1(nom_Joueur1,true),Joueur2(nom_Joueur2,false),message(nom_Joueur1,nom_Joueur2)
{
    tours_compt = 0 ;
    jetonsListe = new jetons[6] ;
    win_game = false ;
}

void Jeu::game(int slot)
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
        changeVis() ;
        changeTexte() ;
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
        if (tours_compt % 2 == 1) testVictoire(caseJ1) ;
        else testVictoire(caseJ2) ;
        delete[] caseJ1 ;	//REVISAR
        delete[] caseJ2;  //REVISAR
    }
}


bool Jeu::testVictoire(int *pPos) //CAMBIAR MATEMATICA SI ES POSIBLE
{
    int a ;
    if (pPos[0] > pPos[1])
    {
        a = pPos[0] ;
        pPos[0] = pPos[1] ;
        pPos[1] = a ;
    }
    if (pPos[1] > pPos[2])
    {
        a = pPos[2] ;
        pPos[2] = pPos[1] ;
        pPos[1] = a ;
    }
    if (pPos[0] > pPos[1])
    {
        a = pPos[0] ;
        pPos[0] = pPos[1] ;
        pPos[1] = a ;
    }
    if (pPos[0]==0 && pPos[1]==1 && pPos[2]==2){win_game=true;}
    else if (pPos[0]==3 && pPos[1]==4 && pPos[2]==5){win_game=true;}
    else if (pPos[0]==6 && pPos[1]==7 && pPos[2]==8){win_game=true;}
    else if (pPos[0]==0 && pPos[1]==4 && pPos[2]==8){win_game=true;}
    else if (pPos[0]==2 && pPos[1]==4 && pPos[2]==6){win_game=true;}
    else if (pPos[0]==0 && pPos[1]==3 && pPos[2]==6){win_game=true;}
    else if (pPos[0]==1 && pPos[1]==4 && pPos[2]==7){win_game=true;}
    else if (pPos[0]==4 && pPos[1]==5 && pPos[2]==8){win_game=true;}
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
            positions[jetonsListe[j].getPosition()] = "#e71b0f" ;
        }
        else
        {
            positions[jetonsListe[j].getPosition()] = "#2998e0" ;
        }
    }
    return positions ;
}



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


QString Jeu::currentText()
{
    return message.getText(tours_compt, win_game) ;
}
