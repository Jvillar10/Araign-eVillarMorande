#include "jetons.h"
#include <iostream>
u	sing namespace std ;

jetons::jetons()
{
    joueur = 0 ;
    position = 0 ;
}

jetons::jetons(int num_joueur, int num_position)
{
    if(num_joueur == 1 || num_joueur == 2) joueur = num_joueur ;
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
    piece_Select = false ;
}

int piece::getJoueur()
{
    return joueur ;
}

int piece::getPosition()
{
    return position ;
}

bool piece::getSelected()
{
    return piece_Select ;
}

void piece::setSelected(bool select)
{
    piece_Select = select ;
}
