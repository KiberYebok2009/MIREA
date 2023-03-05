#include <iostream>
#include <locale>
#include "rational.h"
using namespace std;
void rational::set(int a1, int b1) {
        a = a1;
        b = b1;
    }
    rational::rational() {

    }
    rational::rational(int a1, int b1) {
        a = a1;
        b = b1;
        if (b == 0) {
            cout << "Знаменатель равен 0" << endl;
        }
        else if (a == 0) {
            cout << "Числитель равен 0" << endl;
        }
        else if ((a > b) and (a % b == 0) and (b != 0)) {
            cout << "Дробная часть = 0 " << endl;
        }
        else {
            if ((a > b) and (a % b) != 0) {
                int rest;
                rest = (a % b);
                cout << "Дробная часть = " << rest << "/" << b << endl;
            }
            else if (b > a) {
                if (b % a == 0) {
                    b /= a;
                    a = 1;
                }
            }
        }
    }
    void rational::show() {
        if (b > a) {
            cout << a << "/" << b << endl;
        }
    }