#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    srand(time(0));
    int c1=0, c2=0;

    cout<<"Car race is start\n";

    while(c1<10 && c2<10){
        int n = rand();
        if(n%2==0){       
            c1++;
            cout<<"Car1: ";
            for(int i=0;i<c1;i++) cout<<"->";
            cout<<"\n";
        } else {          
            c2++;
            cout<<"Car2: ";
            for(int i=0;i<c2;i++) cout<<"->";
            cout<<"\n";
        }
        Sleep(500);
    }

    if(c1>=10) cout<<"Car1 Winner";
    else cout<<"Car2 Winner";

    return 0;
}
