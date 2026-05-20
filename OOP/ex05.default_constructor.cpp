/*Implement the Rectangle class (from Exercise 1). 
This time, include two public constructors: 
a default constructor that sets both length and width to 1, 
and a parameterized constructor that
allows setting custom values for length and width.*/

#include <iostream>
using namespace std;
    //class "Rectangle"
    class Rectangle{
        private: 
            int length, width;
        public:
            //parameterized constructor
            Rectangle(int length, int width)
            {
                this->length = length;
                this->width = width;
            }
            //constructor with default value [no arguments basically]
            Rectangle()
            {
                this->length = 1;
                this->width = 1;
            }
            //getter function for private variables
            int getLength(){return length;}
            int getWidth(){return width;}
            int calculate_area()
            {
               return length*width; 
            }
            int calculate_perimeter()
            {
                return 2*(length+width);
            }
    };
int main()
{
    //constructor with custom parameters
    Rectangle rect1(3,2);
    cout<<"Dimensions of Rectangle: "<<rect1.getLength()<<"x"<<rect1.getWidth()<<endl;
    cout<<"Area = "<< rect1.calculate_area()<<endl;
    cout<<"Perimeter = "<<rect1.calculate_perimeter()<<endl<<endl;
    
    //default constructor without parameter
    Rectangle rect2;
    cout<<"Dimensions of Rectangle: "<<rect2.getLength()<<"x"<<rect2.getWidth()<<endl;
    cout<<"Area = "<< rect2.calculate_area()<<endl;
    cout<<"Perimeter = "<<rect2.calculate_perimeter()<<endl<<endl;
    return 0;
}

/*
OUTPUT:
Dimensions of Rectangle: 3x2
Area = 6
Perimeter = 10

Dimensions of Rectangle: 1x1
Area = 1
Perimeter = 4
*/
