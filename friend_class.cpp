#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"Value of a is: "<<a<<endl;
    }
    friend class B;
};

class B
{
public:
    void msg(A &ob)
    {
        cout<<"Accessing private variable in friend class: "<<ob.a<<endl;
    }
};

int main()
{
    A ob;
    ob.setData(10);
    ob.show();

    B oc;
    oc.msg(ob);

    return 0;
}