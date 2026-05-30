/* Modify the Car class (from Ex. 3) to have private members make, model, and year. 
Ensure the year is immutable after the object is constructed by only providing a 
constructor and a public getter method for year, but no setter method for year. */
#include <iostream>
using namespace std;
class Car
{
  private:
    string make, model;
    int year;
  public:
    Car(string maker, string variation, int date):make(maker), model(variation), year(date)
    {
      cout<<year<<" "<<make<<" "<<model<<endl;
    };
    int year_getter()
    {
      return year;
    }
    string make_getter()
    {
      return make;
    }
    string model_getter()
    {
      return model;
    }
    void make_model_setter(string maker, string variation)
    {
      make = maker;
      model = variation;
    }
};
int main()
{
  Car C1("Honda", "Civic", 2018);
  cout<<"Car was manufactured in: "<<C1.year_getter()<<endl;
  C1.make_model_setter("Acura", "Civic");
  cout<<C1.year_getter()<<" "<<C1.make_getter()<<" "<<C1.model_getter();
  return 0;
}