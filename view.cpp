#include <QGLFormat>
#include "view.h"

View::View(QGraphicsScene *scene, QWidget *parent) 
	: QGraphicsView(scene, parent)
{
	setRenderHints(QPainter::Antialiasing);
}

void View::setWidget(QWidget *widget)
{
    this->widget = (Solid *)widget;
    setViewport(this->widget);
    setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
}

void View::drawBackground(QPainter *p, const QRectF &rect)
{
	widget->updateGL();
	QGraphicsView::drawBackground(p, rect);
}

void View::mousePressEvent(QMouseEvent *event)
{
	widget->mousePressEvent(event);
}

void View::mouseMoveEvent(QMouseEvent *event)
{
	widget->mouseMoveEvent(event);
}

void View::mouseDoubleClickEvent(QMouseEvent *event)
{
	widget->mouseDoubleClickEvent(event);
}


