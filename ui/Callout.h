//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_CALLOUT_H
#define UWBTEST_CALLOUT_H



#include <QChartGlobal>
#include <QGraphicsItem>
#include <QFont>
#include <QChart>



class Callout : public QGraphicsItem
{
public:
    Callout(QChart *parent);

    void setText(const QString &text);
    void setAnchor(QPointF point);
    void updateGeometry();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

private:
    QString text;
    QRectF textRect;
    QRectF rect;
    QPointF anchor;
    QFont font;
    QChart *chart;
};

#endif //UWBTEST_CALLOUT_H
