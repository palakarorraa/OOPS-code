#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    void showAddition(int x,int y)
    {
        cout<<"Sum of "<<x<<" and "<<y<<" is: "<<add(x,y)<<endl;
    }
};
int main()
{
    Calculator cal;
    cal.showAddition(10,20);
    return 0;
}
