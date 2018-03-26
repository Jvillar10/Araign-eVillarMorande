#include "jetons.h"
#include <iostream>
using namespace std ;

jetons::jetons()
{
    joueur = 0 ;
    position = 0 ;
}

jetons::jetons(int num_joueur, int num_position)
{
    if(num_joueur == 1 || num_joueur == 0) joueur = num_joueur ;
    if(num_position <= 8 && num_position >= 0) position = num_position ;
    jeton_Select = false ;
}

jetons::jetons(int num_joueur)
{
    if(num_joueur == 1 || num_joueur == 2) joueur = num_joueur ;
    jeton_Select = false ;
}

void jetons::setPosition(int num_position)
{
    if(num_position <= 8 && num_position >= 0) position = num_position ;
    jeton_Select = false ;
}

int jetons::getJoueur()
{
    return joueur ;
}

int jetons::getPosition()
{
    return position ;
}

bool jetons::getSelected()
{
    return jeton_Select ;
}

void jetons::setSelected(bool select)
{
    jeton_Select = select ;
}
