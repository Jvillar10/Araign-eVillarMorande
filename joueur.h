#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
using namespace std;

class Joueur
{
public:
    Joueur(string nom_Joueur, bool etat = false);
    void activation_Joueur() ;
    void desactivation_Joueur() ;
    bool etat_Actif() ;
    string getNom(); 
private:
    bool Joueur_actuel;
    string nom;

};


#endif // JOUEUR_H
