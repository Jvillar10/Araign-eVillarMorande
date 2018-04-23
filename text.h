#ifndef TEXT_H
#define TEXT_H
#include <QObject>
#include <string>
using namespace std;

//Class pour le interface de QML et les texts
class text
{
public:
    text(string joueur_1, string joueur_2) ;
    Q_INVOKABLE QString getText(int tours_Jeu, bool issue) ;
    string get_instructions() ;
    void joueur_Act(string joueur) ;
    void gagnant(int joueur) ;
    void dephasage() ;
    void fin() ;
private:
    QString message_Affiche;
    string Joueur_1,Joueur_2, instructions;
};


#endif // TEXT_H

