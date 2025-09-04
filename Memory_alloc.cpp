#include<iostream>
using namespace std;

class Student
{
    public:
    void show(int id,string name)
    {
        cout<<"Student ID: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
    }
};
int main()
{
    Student ob,ob1,ob2;
    ob.show(101,"Palak");
    ob1.show(102,"Jiya");
    ob2.show(103,"Mahak");
    return 0;
}