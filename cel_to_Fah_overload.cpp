#include <iostream>
using namespace std;

class Celsius{
    float c;
public:
    void getdata(){
        cout<<"Enter the temperature in Celsius: ";
        cin>>c;
    }
    operator float(){
        return (c*1.8)+32;
    }
};

int main(){
    Celsius temp;
    temp.getdata();
    
    float f = temp;

    cout<<"Temperature in Fahrenheit: "<<f;
    return 0;
}