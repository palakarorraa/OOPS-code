#include<iostream>
using namespace std;

int main()
{
    int num;
invalid:
     cout<<"Enter a number between 1 to 5:";
     cin>>num;

     if(num>0 && num<6){
        goto valid;
     }
     else{
        cout<<"Invalid number! Try Again.\n";
        goto invalid;
     }
valid:
     cout<<"Valid number entered:"<<num<<endl;
     return 0;

}