#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch(int x)
    {
        cout<<"An exception occurred,thrown value is  : "<<x<<endl;
    }
    return 0;
}