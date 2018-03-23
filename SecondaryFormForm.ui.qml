import QtQuick 2.4

Item {
    width: 640
    height: 480

    Rectangle {
        id: rectPhoto
        x: 24
        y:123
        width:360
        height:319
        color:"#cccccc"
        Image {
            id: image1
            x: 0
            y: 1
            width:360
            height:318
            fillMode: Image.Stretch
            source: "tablero.jpg"

            Rectangle {
                id: rectangle1
                x: 45
                y: 8
                width: 31
                height: 28
                color: "#ffffff"

                MouseArea {
                    id: mouseArea1
                    x: -9
                    y: -6
                    width: 50
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle2
                x: 160
                y: 6
                width: 34
                height: 30
                color: "#ffffff"

                MouseArea {
                    id: mouseArea2
                    x: -5
                    y: -6
                    width: 44
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle3
                x: 282
                y: 9
                width: 29
                height: 27
                color: "#ffffff"

                MouseArea {
                    id: mouseArea3
                    x: -11
                    y: -9
                    width: 50
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle4
                x: 42
                y: 145
                width: 36
                height: 29
                color: "#ffffff"

                MouseArea {
                    id: mouseArea4
                    x: -7
                    y: -6
                    width: 50
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle5
                x: 163
                y: 149
                width: 28
                height: 25
                color: "#ffffff"

                MouseArea {
                    id: mouseArea5
                    x: -8
                    y: -10
                    width: 44
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle6
                x: 282
                y: 149
                width: 29
                height: 25
                color: "#ffffff"

                MouseArea {
                    id: mouseArea6
                    x: -11
                    y: -10
                    width: 50
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle7
                x: 46
                y: 287
                width: 32
                height: 23
                color: "#ffffff"

                MouseArea {
                    id: mouseArea7
                    x: -11
                    y: -9
                    width: 50
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle8
                x: 166
                y: 285
                width: 29
                height: 27
                color: "#ffffff"

                MouseArea {
                    id: mouseArea8
                    x: -11
                    y: -7
                    width: 44
                    height: 40
                    visible: false
                }
            }

            Rectangle {
                id: rectangle9
                x: 282
                y: 287
                width: 26
                height: 25
                color: "#ffffff"

                MouseArea {
                    id: mouseArea9
                    x: -10
                    y: -8
                    width: 50
                    height: 40
                    visible: false
                }
            }

        }

    }
}
