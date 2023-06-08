//
// Created by Lenovo on 2023/5/27.
//

#include <QList>
#include <random>
#include <utility>
#include "FindPoint.h"

std::mt19937 generator(std::random_device{}());  // 实例化一个随机数生成器
std::uniform_real_distribution<double> distribution(0.0, 1.0);  // 创建一个小数分布

QPointF FindPoint::coordinateProcessing(QVector<double> distance) {

    QVector<QVector<double>> uwbPositions{{0.0,0.0},{0.0,11.2},{11.2,11.2},{11.2,0.0}};

    return positionCalculate(std::move(distance),uwbPositions);

}

double FindPoint::random() {
    return distribution(generator);
}

QPointF FindPoint::positionCalculate(QVector<double> distance, QVector<QVector<double>> uwbPositions) {
    int i;
    QPointF points;
    double nextX = 0,nextY = 0;
    double changer;
    double p1;
    points.setX(X);
    points.setY(Y);
    double preX = X;
    double preY = Y;
    double preValue = std::numeric_limits<double>::max();//std::numeric_limits 类模板来获取各种数值类型的极值
    double curValue = std::numeric_limits<double>::max();
    double bestValue = std::numeric_limits<double>::max();
    double t = 1.0;//代表开始的温度

    while(t >= PRECISION){//温度下降到什么程度为止

        t *= K;// 温度每次下降 0.04
        for(i = 0;i < L;i++){
            while(true){
                //扰动，产生一个新解
                nextX = preX + t * S * (random() - 0.5) * (X_MAX - X_MIN);
                nextY = preY + t * S * (random() - 0.5) * (Y_MAX - Y_MIN);
                //如果在搜索范围
                if((nextX >= X_MIN) && (nextX <= X_MAX) && (nextY >= Y_MIN) && (nextY <= Y_MAX)){
                    break;
                }
            }

            curValue = optimizationFunction(nextX,nextY,distance,uwbPositions);

            //判断最新解和最优解的误差
            if(bestValue > curValue){
                //此为新的最优解
                points.setX(nextX);
                points.setY(nextY);
                bestValue = curValue;
            }

            //如果上一次解误差大于新解，则接收新解
            if(preValue > curValue){
                //接收新解
                preX = nextX;
                preY = nextY;
                preValue = curValue;
            }else{
                changer = (preValue - curValue) / (K * t);
                //计算概率
                p1 = std::exp(changer);
                //以一定概率接收较差的解
                if(p1 > random()){
                    preX = nextX;
                    preY = nextY;
                    preValue = curValue;
                }
            }
        }
    }
    return points;
}

double FindPoint::optimizationFunction(double x, double y, QVector<double> distance, QVector<QVector<double>> uwbPositions) {
    double f21 = 0,f31 = 0,f41 = 0;
        //基准点与待定点差值开方
        double baseDifference = std::sqrt(x * x + y * y);
        //B2 - B1
        f21 = -(distance[1] - distance[0]) + std::sqrt(x * x + (y - uwbPositions[1][1]) * (y - uwbPositions[1][1])) - baseDifference;
        //B3 - B1
        f31 = -(distance[2] - distance[0]) + std::sqrt((x - uwbPositions[2][0]) * (x - uwbPositions[2][0]) + (y - uwbPositions[2][1]) * (y - uwbPositions[2][1])) - baseDifference;
        // B4 - B1
        f41 = -(distance[3] - distance[0]) + std::sqrt((x - uwbPositions[3][0]) * (x - uwbPositions[3][0]) + y * y) - baseDifference;

    return abs(f21) + abs(f31) + abs(f41);
}
