//
// Created by Lenovo on 2023/5/27.
//

#include "KalmanFilter.h"



KalmanFilter::KalmanFilter() {
    // 定义状态转移矩阵 A
    Eigen::MatrixXd A_data(4, 4);
    A_data << 1, 0, 1, 0,
            0, 1, 0, 1,
            0, 0, 1, 0,
            0, 0, 0, 1;
    A = A_data;

    // 定义状态转移噪声协方差矩阵 Q
    Eigen::MatrixXd Q_data(4, 4);
    Q_data << 0.01, 0, 0, 0,
            0, 0.01, 0, 0,
            0, 0, 0.001, 0,
            0, 0, 0, 0.001;
    Q = Q_data;

    // 定义观测矩阵 H
    Eigen::MatrixXd H_data(2, 4);
    H_data << 1, 0, 0, 0,
            0, 1, 0, 0;
    H = H_data;

    // 定义观测噪声协方差矩阵 R
    Eigen::MatrixXd R_data(2, 2);
    R_data << 0.1, 0,
            0, 0.1;
    R = R_data;

    // 定义初始状态向量 x0
    Eigen::VectorXd x_data(4);
    x_data << 0, 0, 0, 0;
    x = x_data;

    // 定义初始协方差矩阵 P0
    Eigen::MatrixXd P_data(4, 4);
    P_data << 1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, 0, 1;
    P = P_data;
}



void KalmanFilter::update(Eigen::VectorXd z) {
    // 预测状态向量和协方差矩阵
    x = A * x;
    P = A * P * A.transpose() + Q;

    // 计算 Kalman 增益矩阵
    Eigen::MatrixXd denominator = H * P * H.transpose() + R;
    Eigen::MatrixXd Kk = P * H.transpose() * denominator.inverse();

    // 更新状态向量和协方差矩阵
    x = x + Kk * (z - H * x);
    P = (Eigen::MatrixXd::Identity(4, 4) - Kk * H) * P;
//    qDebug() <<"x0:"<< x(0) <<"x1:" << x(1);
}

QPointF KalmanFilter::getPoint(QPointF points) {
    Eigen::VectorXd matrixDistance(2);
    matrixDistance << points.x(), points.y();
    update(matrixDistance);

    QPointF returnPoint;
    returnPoint.setX(x(0));
    returnPoint.setY(x(1));
    return returnPoint;
}
