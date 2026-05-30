/* Implement a class Temperature with a private member double celsius. 
Provide a public setter method set_celsius(double c) to assign a value to the private member. 
Also, provide a public getter method get_fahrenheit() that 
calculates and returns the temperature in Fahrenheit using the formula: F = C (9/5) + 32. */
#include <iostream>
using namespace std;
class Temperature
{
  private:
    double celcius;
  public:
    void set_celcius(double c)
    {
      celcius = c;
    }
    double get_fahrenheit()
    {
      return 1.8*celcius+32;
    }
};
int main()
{
  double C; Temperature T1;
  cout<<"Enter temperature in degree Celcius: ";
  cin>>C;
  T1.set_celcius(C);
  cout<<"Temperature in Freedom Units: "<<T1.get_fahrenheit(); //pun intended
  return 0;
}

/* OUTPUT: 
Enter temperature in degree Celcius: -40
Temperature in Freedom Units: -40 */