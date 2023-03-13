#include <iostream>
#include <cmath>
#include <windows.h>
#include <locale>
#include "Cone.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество Конусов" << endl;
    cin >> n;
    Cone* arr = new Cone[n];
    for (int i = 0; i < n; i++) {
        double a, b, c, r, h;
        cout << "Введите координаты центра" << endl;
        cin >> a >> b >> c;
        cout << "Введите радиус и высоту" << endl;
        cin >> r >> h;
        if (a == 0 && b == 0 && c == 0) {
            arr[i] = Cone(r, h);
            arr[i].show();
        }
        else {
            arr[i] = Cone(a, b, c, r, h);
            arr[i].show();
        }
    }
    delete[]arr;

    return 0;
}