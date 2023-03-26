#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
#include "Cone.h"
Cone::Cone() { x = y = z = radius = height = 0; }
Cone::Cone(double r, double h) {
    x = y = z = 0.0;
    radius = r;
    height = h;
}
Cone::Cone(double a, double b, double c, double r, double h) {
    x = a;
    y = b;
    z = c;
    radius = r;
    height = h;
}
void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Cone::setRadius(double r) { radius = r; }
void Cone::setHeight(double h) { height = h; }
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }
double Cone::getX() { return x; }
double Cone::getY() { return y; }
double Cone::getZ() { return z; }
double Cone::area() {
    double l = sqrt(height * height + radius * radius);
    return 3.14 * radius * (radius + l);
}
double Cone::volume() {
    return 3.14 * radius * radius * height / 3;
}
void Cone::show() {
    if (x != 0 && y != 0 && z != 0) {
        cout << "Координаты конуса: (" << x << "," << y << "," << z << ")" << endl;
    }
    cout << "Площадь полной поверхности конуса: " << area() << endl;
    cout << "Объём конуса: " << volume() << endl;

}
ostream& operator<<(ostream& stream, Cone& obj) {
    return stream << "(" << obj.getX() << "; " << obj.getY() << "; " << obj.getZ() << ") " << "r=" << obj.getRadius() << " " << "h=" << obj.getHeight() << "\n";
}