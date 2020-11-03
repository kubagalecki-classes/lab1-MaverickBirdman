#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// czemu w ciele klasy moze byc funkcja korzystajaca z //argumentu ktory jest pod spodem dopiero
// zdefiniowany?
class Wektor2D
{
public:
    double norm() { return sqrt(x * x + y * y); }
    // co to znaczy ladny format?
    void print() { cout << "x= " << x << endl << "y= " << y << endl; }
    void print_norm() { cout << "Norma= " << norm() << endl; }

    Wektor2D(double new_x, double new_y, string new_name) // konstruktor z 2 argumentami
    {
        x    = new_x;
        y    = new_y;
        name = new_name;
        cout << "Nazwa: " << name << endl
             << "x= " << new_x << endl
             << "y= " << new_y << endl
             << endl;
    }
    ~Wektor2D() // destruktor
    // niszczy obiekty od ostatniego stworzonego
    {
        cout << endl << "Obiekt " << name << " zostal zniszczony." << endl;
    }

    double x;
    double y;
    string name;
};

class Informer
{
public:
};

int main()
{
    // puts("Hello, World!");
    Wektor2D v1(3.55, 5.66, "v1");
    Wektor2D v2(2.55, 1.66, "v2");
    Wektor2D v3(3, 4, "v3");
    Wektor2D v4(3, 4, "v4");
    Wektor2D v5(3, 4, "v5");
    // v1.x = 3.5;
    // v1.y = 5.6;
    // v1.norm();
    // v1.print();
    // v1.print_norm();

    return 0;
}   Wektor2D v2{2., 2.};    // Konstruktor nadający współrzędne
                            // cout << endl<<v2.x << endl << v2.y << endl;
    Wektor2D sum = v1 + v2; // dodawanie wektorów
                            // cout << sum.x << endl;
                            // cout << sum.y << endl;
    double prod = v1 * v2;  // iloczyn skalarny
                            // cout << prod;
    return 0;
}