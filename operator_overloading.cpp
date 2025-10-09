#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    void getdata(int a)
    {
        x=a;
    }
    A operator -()
    {
        A temp;
        temp.x= -x;
        return temp;
    }
    void show()
    {
        cout<<"x is: "<< x <<endl;
    }
};
int main()
{
    A n1,n2;
    n1.getdata(10);
    cout<<"Before overloading: "<<endl;
    n1.show();
    cout<<"After overloading: "<<endl;
    n2=-n1;
    n2.show();
    return 0;
}