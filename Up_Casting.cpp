#include<iostream>
using namespace std;
class Base{
    public:
    void show()
    {
        cout<<"Base class show()"<<endl;
    }
};
class Derived : public Base {
    public:
    void display()
    {
        cout<<"Derived class display()"<<endl;
    }
};
int main()
{
    Derived d;
    Base *b= &d;
    b->show();
    return 0;
}