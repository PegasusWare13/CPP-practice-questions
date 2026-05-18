#include <iostream>
using namespace std;
int main()
{
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
            int calculate_area()
            {
               return length*width; 
            }
            int calculate_perimeter()
            {
                return 2*(length+width);
            }
    };
    
    Rectangle rect1(3,2);
    cout<<"Area = "<< rect1.calculate_area()<<endl;
    cout<<"Perimeter = "<<rect1.calculate_perimeter();
    
}
