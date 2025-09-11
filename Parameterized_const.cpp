#include<iostream>
using namespace std;
class A
{
    public:
    int ID;
    string n;
    A(int roll_no,string name)
    {
        ID=roll_no;
        n=name;
        cout<<"Roll no: "<<ID<<endl;
        cout<<"Name is: "<<n<<endl;
    }
};
int main()
{
    A ob(20,"Palak");
    return 0;
}