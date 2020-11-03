class Wektor2D
{
  public:
  Wektor2D(){x=0.; y=0.;}//Konstruktor domyślny
  void setX(double newX){x=newX;}
  void setY(double newY){y=newY;}
  double getX(){return x;}
  double getY(){return y;}
  Wektor2D(double newX, double newY){x=newX; y=newY;}

friend Wektor2D operator+( Wektor2D &v1,  Wektor2D &v2)
 {
     return Wektor2D(v1.x+v2.x, v1.y+v2.y);
 }

 friend double operator*( Wektor2D &v1,  Wektor2D &v2)
 {
     return v1.x*v2.x+v1.y*v2.y;
 }

  private:
  double x;
  double y;
};

int main()
{
Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter
double x1 = v1.getX();   // getter
double y1 = v1.getY();   // getter

Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

Wektor2D sum = v1 + v2; // dodawanie wektorów

double prod = v1 * v2; // iloczyn skalarny
return 0;
}