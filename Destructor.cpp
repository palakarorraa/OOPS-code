#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Contructor"<<endl;
    }
    ~A()
    {
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    A ob;
    return 0;
}