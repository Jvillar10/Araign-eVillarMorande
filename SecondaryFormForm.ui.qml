import QtQuick 2.4

Item {
    width: 640
    height: 480

    Rectangle {
               id: rectPhoto
               x: 30
               y:20
               width:360
               height:360
               color:"#cccccc"
        Image {
         id: image1
         x: 30
         y: 30
         width:300
         height:300
         fillMode: Image.Stretch
         source: "tablero.jpg"
        }
    }
}
