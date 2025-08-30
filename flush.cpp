#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    string text="Welcome to JECRC";
    for(int i=0;i<text.length();i++)
    {
        cout<<text[i]<<flush;
        Sleep(300);
    }
    return 0;
}