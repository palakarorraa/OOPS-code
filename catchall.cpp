#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch(...)
    {
        cout<<"An unknown exception was caught by the catch-all handler";
    }
    return 0;
}