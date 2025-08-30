#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    string("pause");//waits for user input
    for(int i=5;i>=1;--i){
        cout<<i <<endl;
        Sleep(1000);//wait for 1 second
    }
    cout<<"Rocket Launched"<<endl;
    return 0;
}