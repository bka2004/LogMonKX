#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <memory>
#include "iworkset.h"
#include "workset.h"
#include "commandlineprocessor.h"

// the starting point of all
static std::unique_ptr<IWorkset> g_workset = std::make_unique<Workset>();


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    CommandLineProcessor commandLineProc(g_workset->GetController());
    commandLineProc.Process(app.arguments());

    return app.exec();
}
