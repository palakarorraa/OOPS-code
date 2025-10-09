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

    A operator ++()
    {
        A temp;
        temp.x = ++x;
        return temp;
    }


    A operator ++(int)
    {
        A temp;
        temp.x = x++;
        return temp;
    }

    void show()
    {
        cout << "x is : " << x << endl;
    }
};

int main()
{
    A n1, n2;
    n1.getdata(10);

    cout << "Before increment: ";
    n1.show();

    n2 = ++n1;
    cout << "After pre-increment (++n1): ";
    n2.show();

    n2 = n1++;
    cout << "After post-increment (n1++): ";
    n2.show();

    cout << "Final value of n1: ";
    n1.show();

    return 0;
}