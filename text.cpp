#include "text.h"
#include <string>
#include <iostream>

using namespace std;

//Constructeur
text::text(string joueur_1, string joueur_2)
{
    Joueur_1 = joueur_1 ;
    Joueur_2 = joueur_2 ;
    joueur_Act(Joueur_1) ;

}


//QML
QString text::getText(int tours_Jeu, bool issue)
{
    message_Affiche.clear() ;
    if(issue == true)
    {
        gagnant(tours_Jeu % 2) ;
    }
    else
    {
        if (tours_Jeu % 2 == 0) joueur_Act(Joueur_1) ;
        else joueur_Act(Joueur_2) ;
    }
    return message_Affiche ;
}


void text::joueur_Act(string joueur)
{
    message_Affiche.append(QString::fromStdString(joueur)) ;
    message_Affiche.append(" your turn ") ;
}

void text::gagnant(int joueur)
{
    string gagnant ;
    if (joueur == 1)
    {
        gagnant = Joueur_1 ;
    }
    if (joueur == 0)
    {
        gagnant = Joueur_2 ;
    }
    message_Affiche.append(QString::fromStdString(gagnant)) ;
    message_Affiche.append(" WIN !") ;
}

