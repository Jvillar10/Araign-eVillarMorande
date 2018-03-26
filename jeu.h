#ifndef JEU_H
#define JEU_H
#include "jetons.h"
#include "joueur.h"
//#include "text.h"
#include <string>
#include <QObject>
using namespace std;


class Jeu:public QObject

{
    Q_OBJECT
public:
    explicit Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent = 0);
    Q_INVOKABLE void pilotage(int slot);
    void premiere_Etape(int slot) ; //gère la parti quand les 6 jetons ne sont pas encore mis
    void seconde_Etape(int slot) ; //gère la suite
    void victoire() ;

public slots:

private:
    int tours_compt;
    //text messages;
    Joueur Joueur1, Joueur2;
    jetons *jetonsListe;
    bool win_game;
};

#endif // JEU_H
