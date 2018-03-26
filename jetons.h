#ifndef JETONS_H
#define JETONS_H


class jetons
{
public:
    jetons();
    jetons(int player) ;
    jetons(int player,int pos) ;
    void setPosition(int num_position) ;
    int getJoueur() ;
    int getPosition() ;
    bool getSelected() ;
    void setSelected(bool selection) ;
private:
    int joueur, position ; //recoivent les numéros
    bool jeton_Select ;
};

#endif // JETONS_H

