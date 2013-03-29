#include "view.h"
#include "factory.h"
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#include <QtGui>
#else
#include <QtWidgets>
#endif

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if (!QGLFormat::hasOpenGL()) {
        std::cerr << "This system has no OpenGL support" << std::endl;
        return 1;
    }

    QGraphicsScene scene;
    View view(&scene);

    SolidFactory *factory = new TetrahFactory; // here can replaced by CubeFactory;
    view.setWidget(factory->CreateSolid());

    view.setWindowTitle(QObject::tr("Solid Factory"));
    view.resize(500, 500);
    view.show();

    return app.exec();
}
