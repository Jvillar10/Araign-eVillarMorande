#ifndef JETONS_H
#define JETONS_H


//Class pour le pieces

class jetons
{
public:
    jetons(); //Construteur par defaut
    jetons(int player) ; //Constructeur
    jetons(int player,int pos) ;
    void setPosition(int num_position);
    int getJoueur() ;
    int getPosition() ;
    bool getSelected() ;
    void setSelected(bool selection) ;
private:
    int joueur, position ; //recoivent les numéros
    bool jeton_Select;
};

#endif // JETONS_H

