#ifndef TETRAH_H_
#define TETRAH_H_

#include "solid.h"
#include <QColor>

class Tetrahedron : public Solid
{
    Q_OBJECT

public:
    Tetrahedron(QWidget *parent = 0);

protected:
    void initializeGL();

    void resizeGL(int width, int lenght);

    void paintGL();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);

    void draw();
    int faceAtPosition(const QPoint &pos);

private:
    QColor faceColors[4];
};

#endif // TETRAH_H_

