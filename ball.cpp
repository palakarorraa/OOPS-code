#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int p=0;
    int w=05;
    int d=1;
    
    while(true)
    {
        for (int i=0;i<p;i++)
        {
            cout<<" ";
        }  
        cout<<"0"<<endl;
        Sleep(100);
        system("CLS");
        p += d;
        if(p>=w)  d=-1;
        if(p<=0)  d=1;
    }

    return 0;
}