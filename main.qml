import QtQuick 2.7
import QtQuick.Controls 1.5
import QtQuick.Dialogs 1.2

ApplicationWindow {
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

    ApplicationWindow {
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

