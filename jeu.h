#ifndef JEU_H
#define JEU_H
#include "jetons.h"
#include "joueur.h"
#include "text.h"
#include <string>
#include <QObject>
using namespace std;

// Class principal du Jeu


class Jeu:public QObject

{
    Q_OBJECT
public:

    explicit Jeu(string nom_Joueur1, string nom_Joueur2, QObject *parent = 0); //Constructeur

    Q_INVOKABLE void game(int slot);

    Q_INVOKABLE QList<QString> readPos() ; //liste des positions utilisées
    Q_PROPERTY(QList<QString> posQML READ readPos NOTIFY changePos) ;

    Q_INVOKABLE QList<bool> readVis() ; //positions visibles
    Q_PROPERTY(QList<bool> visQML READ readVis NOTIFY changeVis) ;

    Q_INVOKABLE int getTour() ; // Compteur de nombre de tours
    Q_INVOKABLE QString currentText() ; //method graphique pour afficher le text
    Q_PROPERTY(QString currentText READ currentText NOTIFY changeTexte) ;

    void premiere_Etape(int slot) ; //gère la parti quand les 6 jetons ne sont pas encore mis
    void seconde_Etape(int slot) ; //gère la suite
    void victoire() ;				//
    bool testVictoire(int *pPos);	//

signals:
    //fonctions qui reçoivent la signal de l'interface graphique
    void changePos() ;
    void changeVis() ;
    void changeTexte() ;

private:
    //variables privates, sauf les fonction de ce class peut utiliser
    int tours_compt;
    text message;
    Joueur Joueur1, Joueur2;
    jetons *jetonsListe;
    bool win_game;
};

#endif // JEU_H
