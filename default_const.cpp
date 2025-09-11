#include<iostream>
using namespace std;
class A
{
    public:
    int a=20;
    A()
    {
        cout<<"Default Constructor"<<endl;
        cout<<"Value of a: "<<a<<endl;
    }
};
int main()
{
    A ob;
    return 0;
}