#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
#include "Trunccone.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество усечённых конусов" << endl;
    cin >> n;
    Trunccone* arr = new Trunccone[n];
    for (int i = 0; i < n; i++) {
        double a, b, c, r, h, radius, height;
        cout << "Введите координаты центра усечённой окружности" << endl;
        cin >> a >> b >> c;
        cout << "Введите радиус и высоту для отсекаемой части (Меньше радиуса и высоты конуса, от которого отсекают часть)" << endl;
        cin >> r >> h;
        cout << "Введите радиус и высоту для конуса, от которого отсекают часть" << endl;
        cin >> radius >> height;
        if (a == 0 && b == 0 && c == 0) {
            arr[i] = Trunccone(r, h, radius, height);
            cout << "Конус " << i + 1 << " :" << arr[i];
            cout << "Площадь поверхности: " << arr[i].area() << "\n";
            cout << "Объем: " << arr[i].volume() << "\n";
        }
        else {
            arr[i] = Trunccone(a, b, c, r, h, radius, height);
            cout << "Конус " << i + 1 << " :" << arr[i];
            cout << "Площадь поверхности: " << arr[i].area() << "\n";
            cout << "Объем: " << arr[i].volume() << "\n";
        }
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i].comparison(arr[i], arr[i + 1]);
    }
    delete[]arr;

    return 0;
}