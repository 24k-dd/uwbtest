//
// Created by Lenovo on 2023/5/27.
//

#ifndef UWBTEST_FINDPOINT_H
#define UWBTEST_FINDPOINT_H

#include <QPointF>


class FindPoint {
public:

    static QPointF coordinateProcessing(QVector<double> distance);

    static double random();

    static QPointF positionCalculate(QVector<double> distance,QVector<QVector<double>> uwbPositions);

    static double optimizationFunction(double x,double y,QVector<double> distance,QVector<QVector<double>> uwbPositions);

private:

    //TDOA算法 参数
    constexpr static const double X_MAX = 11.2;
    constexpr static const double X_MIN = 0.0;

    constexpr static const double Y_MAX = 11.2;
    constexpr static const double Y_MIN = 0.0;
    constexpr static const double X = 6.1;
    constexpr static const double Y = 6.1;
    constexpr static const double PRECISION = 0.000001;// 温度下降到什么程度为止
    static const int L = 10;// 马尔科夫链长度
    constexpr static const double K = 0.96;// 温度每次下降的程度
    constexpr static const double S = 0.2;

};

#endif //UWBTEST_FINDPOINT_H
