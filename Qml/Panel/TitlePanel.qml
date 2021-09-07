import QtQuick 2.0

Rectangle {
    id: titlePanle
    color: "red"

    Row{
        anchors.left: parent.left
        spacing: 6
        height: parent.height

        Image {
            id: imageIcon
            source: "../../resource/ivision.png"
        }

        Text {
            id: title
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 28
            font.bold: true
            text: qsTr("Vision")
            color: "black"
        }
    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
