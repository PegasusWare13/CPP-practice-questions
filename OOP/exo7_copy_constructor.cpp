/* Create a class Point with a private member int x 
and int y as a coordinates. Implement a copy constructor for this class. Write a display() method. 
Demonstrate its use by creating a new Point object as a copy of an existing one */
#include <iostream>
using namespace std;
class Point
{
  private:
    int x, y;
  public:
    Point(int x1, int y1):x(x1), y(y1){};//constructor
    int getter_x()
    {
      return x;
    }
    int getter_y()
    {
      return y;
    }
};
int main()
{
  Point P1(3,1);
  cout<<"For P1: x = "<<P1.getter_x()<<" y = "<<P1.getter_y()<<endl;
  Point P2(P1); //Or I can do Point P2 = P1. No difference between what I used and the assignment operator in this case
  cout<<"For P2: x = "<<P2.getter_x()<<" y = "<<P2.getter_y()<<endl;
  return 0;
}