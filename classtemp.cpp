#include<iostream>
using namespace std;

template <class T>
class Box {
private:
    T value;

public:
    Box(T v){ value = v; }
            
    void show(){
        cout<<"Value = "<<value<<endl;
    }
};

int main(){
    Box<int> b1(100);
    Box<string> b2("Hello");

    b1.show();

    return 0;
}