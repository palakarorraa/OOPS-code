#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int dice;
    char a;
    do
    {
        dice=rand()%6+1;
        cout<<"You rolled"<<dice<<endl;
        cout<<"Do you want to play more,Y/N?";
        cin>>a;
    }
    while(a == 'y'||a == 'Y');
    cout<<"Well played"<<endl;

return 0;
}