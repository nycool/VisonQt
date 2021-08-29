#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qquickview.h>
#include <QQmlContext>
#include "FrameLessBase.h"


int main(int argc, char* argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

	QGuiApplication app(argc, argv);

    FrameLessBase view;

    view.setFlags(Qt::Window|Qt::FramelessWindowHint);

    view.setColor(QColor(Qt::transparent));

    const  QUrl url("qrc:/Qml/main.qml");

    view.setSource(url);

    view.show();



    view.rootContext()->setContextProperty("view",&view);


//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/res/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject* obj, const QUrl& objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

	return app.exec();
}
