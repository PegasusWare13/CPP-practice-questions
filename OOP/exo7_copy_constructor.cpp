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
    void display()
    {
      cout<<"The value of x = "<<x<<"The value of y = "<<y;
    }
};
int main()
{
  Point P1;
  
  return 0;
}