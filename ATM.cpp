#include<iostream>
using namespace std;

class ATM{
public:
    int amt,bal=1000;
    void withdraw()
    {
        cout<<"Enter amount to withdraw: ";
        cin>>amt;
        if(amt<=bal && amt>0)
        {
            bal=bal-amt;
            cout<<"Withdraw amount: "<<amt<<endl;
            cout<<"Total Balance: "<<bal<<endl;
        }
        else
        {
            cout<<"Insufficient balance "<<endl;
        }
    }
    void deposite()
    {
        cout<<"Enter amount to Deposite: ";
        cin>>amt;
        if(amt>0)
        {
            bal=bal+amt;
            cout<<"Deposited amount: "<<amt<<endl;
            cout<<"Total balance: "<<bal<<endl;
        }
        else
        {
            cout<<"Invalid amount "<<endl;
        }
    }
    void balance()
    {
        cout<<"Total balance is: "<<bal<<endl;
    }
};

int main()
{
    ATM ob;
    ob.balance();
    ob.deposite();
    ob.withdraw();
    return 0;
}
