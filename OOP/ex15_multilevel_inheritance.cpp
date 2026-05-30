/* Implement multilevel inheritance using three classes: Vehicle –> Car –> SportsCar.
Vehicle should have a method start_transport().
Car should inherit from Vehicle and add a private attribute int number_of_doors and a method open_door().
SportsCar should inherit from Car and add a private attribute int max_speed and a method activate_turbo(). */
#include <iostream>
using namespace std;
class Vehicle
{
  private:
    int model;
  public:
    Vehicle(int m):model(m){}
    void start_transport()
    {
      cout<<"Vehicle ("<<model<<") is moving"<<endl;
    }
};
class Car:public Vehicle
{
  private:
    int number_of_doors;
  public:
    Car(int m, int n):Vehicle(m), number_of_doors(n){}
    void open_door()
    {
      cout<<"Car with "<<number_of_doors<<" doors opened"<<endl;
    }
};
class SportsCar:public Car
{
  private:
    int max_speed;
  public:
    SportsCar(int m, int n, int s):Car(m, n), max_speed(s){}
    // okay so you can't do Vehicle(m) direcctly you gotta link the intermediate class
    void activate_turbo()
    {
      cout<<"Sports Car turbo activated! Max speed: "<<max_speed<<" km/h"<<endl;
    }
};
int main()
{
  SportsCar S(2023, 2, 330);
  S.start_transport();
  S.open_door();
  S.activate_turbo();
}