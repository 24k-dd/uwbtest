//
// Created by Lenovo on 2023/5/27.
//

#ifndef UWBTEST_KALMANFILTER_H
#define UWBTEST_KALMANFILTER_H

#include <Eigen/Core>
#include <Eigen/LU>
#include <QPointF>
#include <QDebug>

class KalmanFilter {
public:
    KalmanFilter();

    void update(Eigen::VectorXd z);

    QPointF getPoint(QPointF points);

private:
    Eigen::MatrixXd A;
    Eigen::MatrixXd Q;
    Eigen::MatrixXd H;
    Eigen::MatrixXd R;
    Eigen::VectorXd x;
    Eigen::MatrixXd P;
};


#endif //UWBTEST_KALMANFILTER_H
