/* Create a simple class, e.g., Resource, with a private member std::string id which models acquiring and
 releasing a resource. Implement a constructor that prints “Resource [ID] acquired” and 
 a destructor that prints “Resource [ID] released”. 
Use a local object inside a function to clearly show when the destructor is called. */
#include <iostream>
using namespace std;
class Resource {
  private:
      string id; 
  public:
      Resource(string identity):id(identity)
      {
        cout<<"Resource " <<id<< " acquired"<<endl;
      };
      ~Resource()
      {
        cout<<"Resource "<<id<<" released"; 
        //no need to use the delete keyword for strings
      }
};
int main()
{
    Resource r1("12345");
    return 0;
}
