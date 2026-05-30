/* Create a base class Animal with a public method eat() that prints “Animal is eating.” 
Derive a class Dog from Animal. The Dog class must override the eat() method to print “Dog is eating kibble.”
 Additionally, add a new public method bark() to the Dog class that prints “Woof! Woof!”. */
 #include <iostream>
 using namespace std;
 class Animal
 {
  public:
    void eat()
    {
      cout<<"Animal is eating."<<endl;
    }
    void sleep()
    {
      cout<<"Animal is sleeping."<<endl;
    }
 };
 class Dog: public Animal
 {
  public:
    void eat()
    {
      cout<<"Dog is eating kibble."<<endl;
    }
    void bark()
    {
      cout<<"Woof! Woof!";
    }
 };
 int main()
 {
  Animal A1; Dog D1;
  //parent class
  A1.eat();
  A1.sleep();
  cout<<endl;
  //child class
  D1.eat();
  D1.sleep();
  D1.bark();
  return 0;
 }