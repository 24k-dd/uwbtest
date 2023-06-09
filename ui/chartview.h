//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_CHARTVIEW_H
#define UWBTEST_CHARTVIEW_H


#include <QChartView>
#include <QRubberBand>

//QT_CHARTS_USE_NAMESPACE

class ChartView : public QChartView
{
public:
    ChartView(QChart *chart, QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    bool isClicking;

    int xOld;
    int yOld;
};


#endif //UWBTEST_CHARTVIEW_H
