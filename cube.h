#ifndef GLWIDGET_H
#define GLWIDGET_H

#include "solid.h"

class Cube : public Solid
{
public:
    Cube(QWidget *parent = 0);

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);

    void draw();
    int faceAtPosition(const QPoint &pos);

private:
    QColor faceColors[6];
};
 
#endif // GLWIDGET_H
