#include<iostream>
using namespace std;

class A
{
private:
    int x;
public:
    void getdata(int a)
    {
        x = a;
    }

    A operator +(A obj)
    {
        A temp;
        temp.x = x + obj.x;
        return temp;
    }

    void show()
    {
        cout << "x is : " << x << endl;
    }
};

int main()
{
    A n1, n2, n3;
    n1.getdata(10);
    n2.getdata(20);

    cout << "Value of x using First object: ";
    n1.show();

    cout << "Value of x using Second object: ";
    n2.show();


    n3 = n1 + n2;

    cout << "After overloading : ";
    n3.show();

    return 0;
}