#pragma once
#include "Cone.h"
class Trunccone :public Cone {
    double x, y, z;
    double height;
    double radius;
    double h;
    double r;
    double pi = 3.14159265;
public:
    Trunccone();
    Trunccone(double r, double h, double radius, double height);
    Trunccone(double x, double y, double z, double r, double h, double radius, double height);
    void setCoordinate(double a, double b, double c);
    void setHeight(double h);
    void setR(double r);
    double getH();
    double getHeight();
    double getR();
    double getRadius();
    double getX();
    double getY();
    double getZ();
    double area();
    double volume();
    void show();
    void comparison(Trunccone& obj1, Trunccone& obj2);
    friend ostream& operator<<(ostream& stream, Trunccone obj);
};

