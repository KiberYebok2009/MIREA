#include "Figure.h"
#include <iostream>
#include <cmath>
using namespace std;
    float figure::S() {
        return(0.5 * abs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1)));
    }
    float figure::P() {
        return(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) + sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) + sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) + sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2)));
    }
    figure::figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4) {
        x1 = X1;
        x2 = X2;
        x3 = X3;
        x4 = X4;
        y1 = Y1;
        y2 = Y2;
        y3 = Y3;
        y4 = Y4;
    }
    void figure::show() {
        cout << "Площадь = " << S() << endl << "Периметр = " << P() << endl;
        if (is_prug() == true) {
            cout << "Прямоугольник" << endl;
        }
        if (is_square() == true and is_prug() == true) {
            cout << "Квадрат" << endl;
        }
        if (is_romb() == true) {
            cout << "Ромб" << endl;
        }
        if (is_square() == true) {
            cout << "Все стороны равны" << endl;
        }
        if (is_in_circle() == true) {
            cout << "Можно вписать в окружность" << endl;
        }
        if (is_out_circle() == true) {
            cout << "Можно описать вокруг окружности" << endl;
        }
    }
    bool figure::is_prug() {
        return(((x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2)) == 0 and ((x2 - x3) * (x4 - x3) + (y2 - y3) * (y4 - y3)) == 0 and ((x3 - x4) * (x1 - x4) + (y3 - y4) * (y1 - y4)) == 0 and ((x4 - x1) * (x2 - x1) + (y4 - y1) * (y2 - y1)) == 0);
    }
    bool figure::is_square() {
        return(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) * 4 == sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) + sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) + sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) + sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2)));
    }
    bool figure::is_romb() {
        if (is_square() == true and is_prug() == false) {
            return true;
        }
        else {
            return false;
        }
    }
    bool figure::is_in_circle() {
        if ((((x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2)) + ((x3 - x4) * (x1 - x4) + (y3 - y4) * (y1 - y4))) == (((x2 - x3) * (x4 - x3) + (y2 - y3) * (y4 - y3)) + ((x4 - x1) * (x2 - x1) + (y4 - y1) * (y2 - y1)))) {
            return true;
        }
        else {
            return false;
        }
    }
    bool figure::is_out_circle() {
        if (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) + sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) == sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) + sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2))) {
            return true;
        }
        else {
            return false;
        }
    }

