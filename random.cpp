#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int random= rand();
    cout<<random;
    return 0;
}