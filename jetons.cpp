#include "jetons.h"
#include <iostream>
using namespace std ;

//Constructeur par defaut
jetons::jetons()
{
    joueur = 0 ;
    position = 0 ;
}


//Constructeur avec deux argument
jetons::jetons(int num_joueur, int num_position)
{
    if(num_joueur == 1 || num_joueur == 0) joueur = num_joueur ;
    if(num_position <= 8 && num_position >= 0) position = num_position ;
    jeton_Select = false ;
}


//Constructeur pour seleccioner le joueur
jetons::jetons(int num_joueur)
{
    if(num_joueur == 1 || num_joueur == 2) joueur = num_joueur ;
    jeton_Select = false ;
}


//Fonction pour changer la position et la garder en position
void jetons::setPosition(int num_position)
{
    if(num_position <= 8 && num_position >= 0) position = num_position ;
    jeton_Select = false ;
}


//Fonction pour envoyer le numero de jouer
int jetons::getJoueur()
{
    return joueur ;
}


//Envoyer osition
int jetons::getPosition()
{
    return position ;
}


//Selection de jetons (bool)
bool jetons::getSelected()
{
    return jeton_Select ;
}


//Selection de jeton (void)
void jetons::setSelected(bool select)
{
    jeton_Select = select ;
}
