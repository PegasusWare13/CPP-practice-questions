/*Implement a Circle class with a private member double radius.
Add a constructor to initialize the radius. Include a public constant member function get_area() 
that calculates and returns the area of the circle (pir, use pi = 3.14159)*/
#include <iostream>
#include <math.h>
using namespace std;
const double pi = 3.14159;
class Circle
{
    private:
        double radius;
    public:
        Circle(double r):radius(r){};
        double get_area() const
        {
            return pi*pow(radius,2);
        };
         /*so this method cannot modify the value of the parameters or variables used inside the
         method hence pi and radius are fixed [even though I already put pi as a global const variable, 
         well if it wasn't a const variable as already, it would be inside our function]*/
};
int main()
{
    double radius_input;
    cout<<"Enter the radius of the circle = ";
    cin>>radius_input;
    Circle c1(radius_input);
    cout<<endl<<"Area of given circle = "<<c1.get_area();
    return 0;
}
