#ifndef JEU_H
#define JEU_H
#include "jetons.h"
#include "joueur.h"
#include "text.h"
#include <string>
#include <QObject>
using namespace std;


class Jeu:public QObject

{
    Q_OBJECT
public:
    explicit Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent = 0);


private:
    int tours_compt;
    text messages;
    Joueur Joueur1, Joueur2;
    jetons *jetonsListe;
    bool victoire;
};

#endif // JEU_H
