/* Create a BankAccount class with private members double balance and std::string account_number. 
Provide public methods deposit(double amount) and withdraw(double amount). The deposit method should add the amount. 
The withdraw method must include validation: it should only proceed if the amount is 
positive and less than or equal to the current balance. 
Both methods should return a boolean indicating success or failure. */
#include <iostream>
using namespace std;
class BankAccount
{
  private:
    double balance;
    string account_number;
  public:
    BankAccount():balance(5000.13), account_number("ET-3312"){};
    void getter()
    {
      cout<<"Account No. "<<account_number<<" has Bank Balance = "<<balance;
    }
    bool deposit(double amount)
    {
      double old_balance_temp = balance;
      bool status = (amount>0);
      if(status){
        balance += amount;
        cout<<"Deposit SUCCESSFULL"<<endl<<"Previous Balance: "<<old_balance_temp<<endl<<"New Balance: "<<balance<<endl;
        return true;
      }
      else
      {
        cout<<"Deposit Value cannot be negative."<<endl;
        return false;
      }
    }
    bool withdraw(double amount)
    {
      double old_balance_temp = balance;
      bool status = balance>=amount;
      if(status)
      {
        balance-=amount;
        cout<<"Withdraw SUCCESSFULL"<<endl<<"Previous Balance: "<<old_balance_temp<<endl<<"New Balance: "<<balance;
        return true;
      }
      else if(!status)
      {
        cout<<"Requested Withdraw Amount ["<<amount<<"] greater than current Bank Balance ["<<balance<<"]";
        return false;
      }
    }
};
int main()
{
  BankAccount B1; double value; bool is_continue;
  B1.getter();
  do{
    string choice;
    
    cout<<endl<<"Enter deposit amount: ";
    cin>>value;
    B1.deposit(value);
    cout<<endl<<"Enter withdraw amount: ";
    cin>>value;
    B1.withdraw(value);
    cout<<endl<<endl<<"Do you want to continue?"<<endl<<"Response: ";
    cin>>choice;
    is_continue = (choice == "Yes" || choice == "yes" || choice == "Y" || choice=="y") ? true:false;
  }while(is_continue);
  cout<<endl<<endl<<"Thank you!";
  return 0;
}

/* Account No. ET-3312 has Bank Balance = 5000.13
Enter deposit amount: 112
Deposit SUCCESSFULL
Previous Balance: 5000.13
New Balance: 5112.13

Enter withdraw amount: 343
Withdraw SUCCESSFULL
Previous Balance: 5112.13
New Balance: 4769.13

Do you want to continue?
Response: Y

Enter deposit amount: -0221
Deposit Value cannot be negative.

Enter withdraw amount: 32322
Requested Withdraw Amount [32322] greater than current Bank Balance [4769.13]

Do you want to continue?
Response: N


Thank you! */