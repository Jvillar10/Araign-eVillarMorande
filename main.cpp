#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "jeu.h"
#include <string>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Jeu araigne("Chile", "Argentina");

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueGame", &araigne) ;//on envoie int pour pouvoir appeler la fonction depuis l'interface
    engine.load(QUrl(QStringLiteral("qrc:/main.qml"))) ;

    return app.exec();
}
