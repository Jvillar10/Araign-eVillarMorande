#ifndef JETONS_H
#define JETONS_H


class jetons
{
public:
    jetons();
    jetons(int player) ;
    jetons(int player,int pos) ;
private:
    int joueur, position ; //recoivent les numéros
    bool piece_Select ;
};

#endif // JETONS_H

