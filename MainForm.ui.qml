import QtQuick 2.7
import QtQuick.Controls 1.5
import QtQuick.Layouts 1.3
Item {
    width: 640
    height: 480
    property alias rectPhoto: rectPhoto
    property alias jeton9: jeton9
    property alias jeton8: jeton8
    property alias jeton7: jeton7
    property alias jeton6: jeton6
    property alias jeton5: jeton5
    property alias jeton4: jeton4
    property alias jeton3: jeton3
    property alias jeton2: jeton2
    property alias jeton1: jeton1
    //property alias image: image
    //property alias text1: text1
    property alias mouseArea: mouseArea
    property alias couleurJ2: couleurJ2
    property alias couleurJ1: couleurJ1
    //property alias joueur2: joueur2
    //property alias joueur1: joueur1
    property alias mouseArea9: mouseArea9
    property alias mouseArea8: mouseArea8
    property alias mouseArea7: mouseArea7
    property alias mouseArea6: mouseArea6
    property alias mouseArea5: mouseArea5
    property alias mouseArea4: mouseArea4
    property alias mouseArea1: mouseArea1
    property alias mouseArea2: mouseArea2
    property alias mouseArea3: mouseArea3
    //VER SI FUNCIONA
    Text {
        id: jouer1
        x: 506
        y: 220
        width: 40
        height: 40
        text: qsTr("Jouer1")
        font.bold: true
        font.family: "Timnes New Roman"
        fontSizeMode: Text.FixedSize
        textFormat: Text.AutoText
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 30
    }

    Text {
        id: jouer2
        x: 506
        y: 272
        width: 40
        height: 40
        text: qsTr("Jouer2")
        font.bold: true
        font.family: "Timnes New Roman"
        fontSizeMode: Text.FixedSize
        textFormat: Text.AutoText
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 30
    }

    Rectangle {
        id: couleurJ1
        x: 425
        y: 225
        width: 30
        height: 30
        color: "#cccccc"
        border.color: "#000000"
        border.width: 4
    }

    Rectangle {
        id: couleurJ2
        x: 425
        y: 277
        width: 30
        height: 30
        color: "#000000"
        border.color: "#cccccc"
        border.width: 4
    }

    MouseArea
    {
        id: mouseArea
        //anchors.rightMargin: 0
        //anchors.bottomMargin: -1
        //anchors.leftMargin: 0
        //anchors.topMargin: 1
        anchors.fill: parent
    }

    Rectangle {
        id: rectPhoto
        x: 24
        y: 123
        width: 360
        height: 319
        color: "#ffffff"
        Image {
            id: image1
            x: 0
            y: 1
            width: 360
            height: 318
            fillMode: Image.Stretch
            source: "tablero.jpg"
        }


            Rectangle {
                id: jeton1
                x: 45
                y: 8
                width: 31
                height: 28
                color: vueGame.gameQML[0]
                visible: vueGame.game3QML[0]


            }

            Rectangle {
                id: jeton2
                x: 160
                y: 6
                width: 34
                height: 30
                color: vueGame.gameQML[1]
                visible: vueGame.game3QML[1]


            }

            Rectangle {
                id: jeton3
                x: 282
                y: 8
                width: 29
                height: 27
                color: vueGame.gameQML[2]
                visible: vueGame.game3QML[2]

            }

            Rectangle {
                id: jeton4
                x: 45
                y: 149
                width: 36
                height: 29
                color: vueGame.gameQML[3]
                visible: vueGame.game3QML[3]


            }

            Rectangle {
                id: jeton5
                x: 166
                y: 149
                width: 25
                height: 25
                color: vueGame.gameQML[4]
                visible: vueGame.game3QML[4]


            }

            Rectangle {
                id: jeton6
                x: 282
                y: 149
                width: 29
                height: 25
                color: vueGame.gameQML[5]
                visible: vueGame.game3QML[5]


            }

            Rectangle {
                id: jeton7
                x: 46
                y: 287
                width: 32
                height: 23
                color: vueGame.gameQML[6]
                visible: vueGame.game3QML[6]


            }

            Rectangle {
                id: jeton8
                x: 166
                y: 284
                width: 29
                height: 27
                color: vueGame.gameQML[7]
                visible: vueGame.game3QML[7]


            }

            Rectangle {
                id: jeton9
                x: 282
                y: 286
                width: 26
                height: 25
                color: vueGame.gameQML[8]
                visible: vueGame.game3QML[8]

            }




        MouseArea {
            id: mouseArea9
            x: 270
            y: 278
            width: 50
            height: 40
            //visible: false
        }

        MouseArea {
            id: mouseArea8
            x: 155
            y: 278
            width: 44
            height: 40
            //visible: false
        }

        MouseArea {
            id: mouseArea7
            x: 36
            y: 278
            width: 50
            height: 40
            //visible: false
        }
        MouseArea {
            id: mouseArea6
            x: 270
            y: 144
            width: 50
            height: 40
           // visible: false
        }

        MouseArea {
            id: mouseArea5
            x: 155
            y: 140
            width: 44
            height: 40
           // visible: false
        }
        MouseArea {
            id: mouseArea4
            x: 36
            y: 144
            width: 50
            height: 40
            //visible: false
        }
        MouseArea {
            id: mouseArea3
            x: 270
            y: 2
            width: 50
            height: 40
            //visible: false
        }
        MouseArea {
            id: mouseArea2
            x: 155
            y: 2
            width: 44
            height: 40
            //visible: false
        }
        MouseArea {
            id: mouseArea1
            x: 36
            y: 1
            width: 50
            height: 40
            //visible: false
        }

    }}


/*Item {
    width: 640
    height: 480

    property alias button1: buttonJugar
    property alias button2: buttonSalir

    RowLayout {
        anchors.verticalCenterOffset: -184
        anchors.horizontalCenterOffset: -51
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



