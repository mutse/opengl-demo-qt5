#ifndef SOLID_H
#define SOLID_H

#include <QGLWidget>
#include <QMouseEvent>
#include <QPoint>

class Solid : public QGLWidget
{
public:
    Solid(QWidget *parent = 0):QGLWidget(parent){}

    virtual void initializeGL() = 0;
    virtual void resizeGL(int width, int height) = 0;
    virtual void paintGL() = 0;
    virtual void mousePressEvent(QMouseEvent *event) = 0;
    virtual void mouseMoveEvent(QMouseEvent *event) = 0;
    virtual void mouseDoubleClickEvent(QMouseEvent *event) = 0;

    virtual void draw() = 0;
    virtual int faceAtPosition(const QPoint &pos) = 0;

protected:
    GLfloat rotationX;
    GLfloat rotationY;
    GLfloat rotationZ;
    QPoint lastPos;
};

#endif // SOLID_H
