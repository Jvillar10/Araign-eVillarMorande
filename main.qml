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





/*ApplicationWindow {
    id: ventanaprincipal
    visible: true
    width: 640
    height: 480
    title: qsTr("Jeu d'Araignée")

    //menuBar: MenuBar {
        //Menu {
            //title: qsTr("File")
            //MenuItem {
                //text: qsTr("&Open")
                //onTriggered: console.log("Open action triggered");
            //}
            //MenuItem {
                //text: qsTr("Exit")
                //onTriggered: Qt.quit();
            //}
        //}
    //}

    MainForm {
        anchors.fill: parent
        //button1.onClicked: messageDialog.show(qsTr("Bonne chance..."))
        button1.onClicked:juego.show();
        button2.onClicked: Qt.quit();
    }

    /*function createWindow(){
        var component = Qt.createComponent("Jeu.qml");
        console.log("Component Status", component.status, component.errorString());
       var window = component.createObjet(root, {"x":100,"y":300);
        window.show();
    }*/

    /*ApplicationWindow {
        id: juego
        width:640
        height:480
        title: qsTr("Jeu active")

    SecondaryForm {
        anchors.fill: parent
    }
}
}
   /*MessageDialog {
        id: messageDialog
        title: qsTr("On commence")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}*/

