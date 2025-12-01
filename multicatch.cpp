#include<iostream>
using namespace std;
int main()
{
    try{
        throw 10.4;
    
    }
    catch(int x)
    {
        cout<<"Integer exception : "<<x <<endl;
    }
    catch(double x)
    {
        cout<<"Double exception :"<<x<<endl;
    }
    return 0;
}