#include "Figure.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 3; i++) {
        float x1, x2, x3, x4, y1, y2, y3, y4;
        cout << "Введите координаты вершин четырёхугольника" << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        figure a(x1, x2, x3, x4, y1, y2, y3, y4);
        a.show();
    }
    return 0;
}