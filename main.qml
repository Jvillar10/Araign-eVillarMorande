import QtQuick 2.7
import QtQuick.Controls 1.5
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.2

Window {
    visible: true
    width: 800
    height: 500
    title: qsTr("ARAIGNEE")

    MainForm {
    anchors.rightMargin: -27
    anchors.bottomMargin: 0
    anchors.leftMargin: 0
    anchors.topMargin: 0
    anchors.fill: parent

    //Interaction QML
    mouseArea1 {
        onClicked: vueGame.game(0);
        }
    mouseArea2{
        onClicked: vueGame.game(1);
    }
    mouseArea3 {
        onClicked: vueGame.game(2);
        }
    mouseArea4{
        onClicked: vueGame.game(3);
    }
    mouseArea5 {
        onClicked: vueGame.game(4);
        }
    mouseArea6{
        onClicked: vueGame.game(5);
    }
    mouseArea7 {
        onClicked: vueGame.game(6);
        }
    mouseArea8{
        onClicked: vueGame.game(7);
    }
    mouseArea9 {
        onClicked: vueGame.game(8);
        }
}}






