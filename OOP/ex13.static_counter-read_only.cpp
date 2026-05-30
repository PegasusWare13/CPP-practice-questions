/* Create a class SerialGenerator with a private static member next_serial_number initialized to 1000. 
Implement a public method get_serial() that returns the current value of next_serial_number and then increments it. 
The counter itself should only be readable via this method. */
#include <iostream>
class SerialGenerator
{
    private:
        static int next_serial_number;
    public:
        int get_serial()
        {
            next_serial_number++;
            return next_serial_number;
            
        }
        int static get_current_serial_number()
        {
            return next_serial_number; //okay I peeked into the solution cause I wasn't sure if I was to make this method static
        }
};
int SerialGenerator::next_serial_number=1000;
int main()
{
    SerialGenerator S1;
    std::cout<<"Initial next serial: "<<S1.get_current_serial_number()<<std::endl;
    std::cout<<"Serial 1: "<<S1.get_serial()<<std::endl;
    std::cout<<"Serial 2: "<<S1.get_serial()<<std::endl;
    std::cout<<"Serial 3: "<<S1.get_serial()<<std::endl;
    std::cout<<"Final serial number: "<<S1.get_current_serial_number();
    return 0;
}