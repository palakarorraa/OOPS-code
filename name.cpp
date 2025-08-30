#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int b;
    cout<<"Enter your name:";
    cin>>a;
    b=a.length();
    if(b%2==0)
    {
        cout<<"Your are a good programmer";
    }
    else
    {
        cout<<"You need more hardwork";
    }
    return 0;
}