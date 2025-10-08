#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    friend void show();
};
void show()
{
    A ob;
    ob.a=20;
    cout<<"Value of A is: "<<ob.a<<endl;
}
int main()
{
    A ob;
    show();
    return 0;
}