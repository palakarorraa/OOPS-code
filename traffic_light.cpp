#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001);    
    
    string r = "Red 🔴";
    string y = "Yellow 🟡";
    string g = "Green 🟢";
    
    for (int i = 0;i<50; i++){
        ofstream Signal("traffice_log.txt");
        cout<<r<<endl;
        Sleep(50);
        cout<<y<<endl;
        Sleep(50);
        cout<<g<<endl;
        Sleep(50);
        cout<<endl;

        Signal<<r<<endl<<y<<endl<<g;
        Signal.close();
    }


}
