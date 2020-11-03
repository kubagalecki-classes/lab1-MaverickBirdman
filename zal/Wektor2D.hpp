#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D() { x = 0.; y = 0.; }//Konstruktor domyślny
    void setX(double newX) { x = newX; }
    void setY(double newY) { y = newY; }
    double getX() { return x; }
    double getY() { return y; }
    Wektor2D(double newX, double newY) { x = newX; y = newY; }

    friend Wektor2D operator+(Wektor2D& v1, Wektor2D& v2)
    {
        return Wektor2D(v1.x + v2.x, v1.y + v2.y);
        // v1.
        // return *this;
    }

    friend double operator*(Wektor2D& v1, Wektor2D& v2)
    {
        return v1.x * v2.x + v1.y * v2.y;
        // v1.
        // return *this;
    }

//private:
    double x;
    double y;
};

