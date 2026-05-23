/* Create a C++ class named Student with the following private members: const std::string name, 
int roll_number, and double score. Implement a constructor that takes parameters for these three 
members and initializes them exclusively using the constructor initialization list. 
Include a display_data() method to show the initialized values. */
#include <iostream>
using namespace std;
class Student
{
  private:
    const string name;
    int roll_number;
    double score;
  public:
    Student(const string N, int RN, double S): name(N), roll_number(RN), score(S)
      {cout<<"Constructor Initialized"<<endl;};
  void display_data()
  {
    cout<<"Initialized Values Listed Below"<<endl<<"Name: "<<name<<endl<<"Roll Number: "<<roll_number<<endl<<"Score: "<<score;
  }
};
int main()
{
  Student S1("Alexander the Great", 0001, 100);
  S1.display_data();
  return 0;
}

/* OUTPUT:
Constructor Initialized
Initialized Values Listed Below
Name: Alexander the Great
Roll Number: 1
Score: 100 */