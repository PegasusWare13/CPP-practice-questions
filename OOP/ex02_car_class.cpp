/*Create a Car class with public attributes 
std::string make, std::string model, and int year. 
Implement a public method start_engine() that 
simply prints the message: “[Year] [Make] [Model] engine started!”.*/

#include <iostream>
using namespace std;
class Car
{
  public:
    string make;
    string model;
    int year;
    
    Car(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
    }
    void start_engine()
    {
        cout<<year<<" "<<make<<" "<<model<<" "<<"engine started!"<<endl;
    }
};
int main()
{
    Car car1("Mercedes", "W11", 2020);
    Car car2("Red Bull", "RB22", 2023);
    //call method for the objects 1 and 2
    car1.start_engine();
    car2.start_engine();
}

/*
OUTPUT:
2020 Mercedes W11 engine started!
2023 Red Bull RB22 engine started!
*/
