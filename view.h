#ifndef VIEW_H_
#define VIEW_H_

#include "solid.h"
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#include <QtGui>
#else
#include <QtWidgets>
#endif

class View : public QGraphicsView
{
public:
    View(QGraphicsScene *scene, QWidget *parent = 0);
    void setWidget(QWidget *widget);

protected:
    void drawBackground(QPainter *p, const QRectF &rect);

    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    Solid *widget;
};

#endif // VIEW_H_

