#pragma once
#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
using namespace std;
class Cone {
    double x, y, z;
    double radius;
    double height;
    double pi = 3.14159265;
public:
    Cone();
    Cone(double r, double h);
    Cone(double a, double b, double c, double r, double h);
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double volume();
    void show();
    double getX();
    double getY();
    double getZ();
    friend ostream& operator<<(ostream& stream, Cone& obj);
};