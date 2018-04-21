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
    property alias image1: image1
    property alias text1: text1
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
        y: 128
        width: 40
        height: 40
        text: qsTr("Chile")
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
        x: 526
        y: 174
        width: 40
        height: 40
        text: qsTr("Argentina")
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
        y: 133
        width: 30
        height: 30
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#e71b0f"
            }

            GradientStop {
                position: 1
                color: "#000000"
            }
        }
        border.color: "#ffffff"
        border.width: 4
    }

    Rectangle {
        id: couleurJ2
        x: 425
        y: 179
        width: 30
        height: 30
        color: "#2998e0"
        border.color: "#ffffff"
        border.width: 4
    }

    Text
    {
        id: text1
        x: 60
        y: 401
        width: 280
        height: 40
        text:vueGame.currentText
        font.italic: true
        font.family: "Times New Roman"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 19
    }

    MouseArea
    {
        id: mouseArea
        anchors.rightMargin: 0
        anchors.bottomMargin: 8
        anchors.leftMargin: 0
        anchors.topMargin: -8
        //anchors.rightMargin: 0
        //anchors.bottomMargin: -1
        //anchors.leftMargin: 0
        //anchors.topMargin: 1
        anchors.fill: parent
    }

    Rectangle {
        id: rectPhoto
        x: 20
        y: 39
        width: 360
        height: 319
        color: "#ffffff"
        Image {
            id: image1
            x: 1
            y: 14
            width: 359
            height: 291
            fillMode: Image.Stretch
            source: "tablero.jpg"
        }


            Rectangle {
                id: jeton1
                x: 47
                y: 19
                width: 30
                height: 30
                color: vueGame.posQML[0]
                visible: vueGame.visQML[0]


            }

            Rectangle {
                id: jeton2
                x: 162
                y: 19
                width: 30
                height: 30
                color: vueGame.posQML[1]
                visible: vueGame.visQML[1]


            }

            Rectangle {
                id: jeton3
                x: 281
                y: 22
                width: 30
                height: 30
                color: vueGame.posQML[2]
                visible: vueGame.visQML[2]

            }

            Rectangle {
                id: jeton4
                x: 47
                y: 145
                width: 30
                height: 30
                color: vueGame.posQML[3]
                visible: vueGame.visQML[3]


            }

            Rectangle {
                id: jeton5
                x: 162
                y: 145
                width: 30
                height: 30
                color: vueGame.posQML[4]
                visible: vueGame.visQML[4]


            }

            Rectangle {
                id: jeton6
                x: 282
                y: 145
                width: 30
                height: 30
                color: vueGame.posQML[5]
                visible: vueGame.visQML[5]


            }

            Rectangle {
                id: jeton7
                x: 47
                y: 278
                width: 30
                height: 30
                color: vueGame.posQML[6]
                visible: vueGame.visQML[6]


            }

            Rectangle {
                id: jeton8
                x: 166
                y: 273
                width: 30
                height: 30
                color: vueGame.posQML[7]
                visible: vueGame.visQML[7]


            }

            Rectangle {
                id: jeton9
                x: 282
                y: 276
                width: 30
                height: 30
                color: vueGame.posQML[8]
                visible: vueGame.visQML[8]

            }




        MouseArea {
            id: mouseArea9
            x: 275
            y: 273
            width: 50
            height: 41
        }

        MouseArea {
            id: mouseArea8
            x: 158
            y: 273
            width: 44
            height: 40
        }

        MouseArea {
            id: mouseArea7
            x: 38
            y: 273
            width: 50
            height: 40
        }
        MouseArea {
            id: mouseArea6
            x: 270
            y: 140
            width: 50
            height: 40
        }

        MouseArea {
            id: mouseArea5
            x: 155
            y: 140
            width: 44
            height: 40
        }
        MouseArea {
            id: mouseArea4
            x: 36
            y: 140
            width: 50
            height: 40
        }
        MouseArea {
            id: mouseArea3
            x: 270
            y: 14
            width: 50
            height: 40
        }
        MouseArea {
            id: mouseArea2
            x: 155
            y: 14
            width: 44
            height: 40
        }
        MouseArea {
            id: mouseArea1
            x: 38
            y: 14
            width: 50
            height: 38
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



