/*
Design a Book class with private members std::string title,
std::string author, and std::string isbn. Include a constructor to initialize them. 
Implement a public method get_details() that returns a 
single formatted std::string containing all the book’s information.
*/
#include <iostream>
class Book
{
    private:
        std::string title, author, isbn;
    public:
        Book(std::string t, std::string A, std::string I):title(t), author(A), isbn(I){}
        std::string getdetails()
        {
            
            std::string FINAL;
            return FINAL.append(title).append(" | ").append(author).append(" | ").append(isbn);
            /*OR I can use the + operator for appending in cpp as shown in the solution in the website   return "Title: " + title + " | Author: " + author + " | ISBN: " + isbn;*/
        }
};
int main()
{
    Book b1("The C++ Programming Language", "Bjarne Stroustrup", "0321563840");
    std::cout<<b1.getdetails();
    return 0;
}
