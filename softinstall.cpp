#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int i, j;
    cout<<"Software Installing..."<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"[]";
        }
    cout<<i*20<<"%"<<endl;
    Sleep(1000);
    }
    return 0;
}