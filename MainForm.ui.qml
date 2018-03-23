import QtQuick 2.7
import QtQuick.Controls 1.5
import QtQuick.Layouts 1.3

Item {
    width: 640
    height: 480

    property alias button1: buttonJugar
    property alias button2: buttonSalir

    RowLayout {
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: 1
        anchors.centerIn: parent

        Button {
            id: buttonJugar
            text: qsTr("JUGAR")

            Button {
                id: buttonSalir
                x: 86
                y: 0
                text: qsTr("SALIR")
            }
        }

        /*Rectangle {
           id: rectPhoto
           x: 30
           y:20
           width:360
           height:360
           color:"#cccccc"
*/
        /*Image {
            id:photo
            x:30
            y:30
            width:300
            height:300
            fillMode: Image.Stretch
            source:"tablero.jpg"
           }*/
    }

}

