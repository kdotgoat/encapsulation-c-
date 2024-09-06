#include <iostream>
#include <cmath>
#define pi 3.14285714
using namespace std;

class Volume{
private:
    double radius;
public:
   Volume(double r = 0){
     radius = r;
    }
    double getRadius(){
    return radius;
    }
    double calculateArea(){
    double area =  4 * pi * pow(radius , 2);
    return area;
    }
    double calculateVolume(){
    double volume = 4/3* pi * pow(radius, 3);
    return volume;
    }

};
int main()
{
    Volume sphere1(10.0);

    double sphere2Radius;
cout<< "Enter the radius of the second sphere: ";
cin >> sphere2Radius;
    Volume sphere2(sphere2Radius);

  cout<< "Sphere 1 radius: "<< sphere1.getRadius()<<endl;
  cout<< "Area: "<< sphere1.calculateArea()<<endl;
  cout<< "Volume: "<< sphere1.calculateVolume()<<endl;

  cout<< "Sphere 2 radius: "<< sphere2.getRadius()<< endl;
  cout<< "Area: "<< sphere2.calculateArea()<< endl;
  cout<< "Volume: "<< sphere2.calculateVolume()<< endl;
    return 0;
}
