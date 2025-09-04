#include<iostream>
using namespace std;

class Bank{
private:
     int bal;
     int interest;

     void calc(){
        interest = (bal * 5 * 1) / 100;
     }

public:
     void show(string name,int amt){
        bal=amt;
        calc();
        cout<<" Account Holder's Name: "<<name<< endl;
        cout<<" Total Balance (after interest): "<<(bal + interest)<<endl;
     }
};

int main(){
    Bank b;
    b.show("Palak ",50000);
    return 0;
}