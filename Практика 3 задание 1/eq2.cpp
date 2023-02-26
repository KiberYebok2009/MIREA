#include <iostream>
#include <cmath>
#include <locale>
#include "eq2.h"
    eq2::eq2(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
        D = pow(b, 2) - 4 * a * c;
    }
    eq2::eq2(eq2& equation1, eq2& equation2) {

    }
    void eq2::set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
        D = pow(b, 2) - 4 * a * c;
    }
    double eq2::find_X() {
        if (D > 0) {
            double x1, x2;
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            if (x1 > x2) {
                cout << x1 << " - Наибольший корень" << endl;
                return x1;
            }
            else {
                cout << x2 << " - Наибольший корень" << endl;
                return x2;
            }
        }
        else if (D == 0) {
            double x1;
            x1 = (-b / (2 * a));
            cout << "Единственный корень x = " << x1 << endl;
            return x1;
        }
        else {
            cout << "Корней нет" << endl;
            return 0;
        }
    }
    double eq2::find_Y(double x1) {
        return (a * pow(x1, 2) + b * x1 + c);
    }