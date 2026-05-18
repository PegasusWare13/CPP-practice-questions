/*Define a class Rectangle with private members int length and int width. 
Implement a constructor to set the dimensions. 
Implement two public methods:
calculate_area() which returns the product of 
length and width, and calculate_perimeter() which returns 2 * (length + width).*/

#include <iostream>
using namespace std;
    //class "Rectangle"
    class Rectangle{
        private: 
            int length, width;
        public:
            Rectangle(int length, int width)
            {
                this->length = length;
                this->width = width;
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
    Rectangle rect1(3,2);
    cout<<"Dimensions of Rectangle: "<<rect1.getLength()<<"x"<<rect1.getWidth()<<endl;
    cout<<"Area = "<< rect1.calculate_area()<<endl;
    cout<<"Perimeter = "<<rect1.calculate_perimeter();
    return 0;
}

/*
OUTPUT:
Dimensions of Rectangle: 3x2
Area = 6
Perimeter = 10
*/
