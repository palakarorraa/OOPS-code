#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
class Distance{
    private:
    int km;
    int m;
    public:
    Distance(int kilometers = 0, int meters = 0){
        km = kilometers;
        m = meters;
    }
    void setRandom(){
        int totalmeters = rand()%20000+1000;
        km = totalmeters/1000;
        m = totalmeters%1000;
    }
    void display() const{
        cout<<km<<"km "<<m<<"m";
    }
    Distance operator+(const Distance &d) const{
        Distance temp;
        temp.km = km + d.km;
        temp.m = m + d.m;
        if (temp.m>=1000){
            temp.km +=temp.m/1000;
            temp.m = temp.m % 1000;
        }
        return temp;
    }
    bool operator<(const Distance &d) const{
        if (km<d.km)
        return true;
        else if (km == d.km && m< d.m)
        return true;
        else
        return false;
    }
    int toMeters() const{
        return(km*1000+m);
    }
}; 
int main(){
    SetConsoleOutputCP(65001);
    srand(time(0));
    cout<<"Trips Started..."<<endl;
    cout<<endl;
    Distance trip1_truck1, trip2_truck1;
    trip1_truck1.setRandom();
    trip2_truck1.setRandom();
    Distance truck1_total = trip1_truck1+trip2_truck1;
    cout<<"Truck 1"<<endl;
    cout<<"Trip 1: ";trip1_truck1.display();
    cout<<endl;
    cout<<"Trip 2: ";trip2_truck1.display();
    cout<<endl;
    cout<<"Truck 1 Total Distance: ";truck1_total.display();
    cout<<endl;
    for (int i=0; i<truck1_total.toMeters()/500; i++){
            cout<<"-";
            Sleep(100);
        }
    cout<<"⛟ 1"<<endl;
    cout<<endl;
    Distance trip1_truck2, trip2_truck2;
    trip1_truck2.setRandom();
    trip2_truck2.setRandom();
    Distance truck2_total = trip1_truck2+trip2_truck2;
    cout<<"Truck 2"<<endl;
    cout<<"Trip 1: ";trip1_truck2.display();
    cout<<endl;
    cout<<"Trip 2: ";trip2_truck2.display();
    cout<<endl;
    cout<<"Truck 2 Total Distance: ";truck2_total.display();
    cout<<endl;
    for (int i=0; i<truck2_total.toMeters()/500; i++){
        cout<<"-";
        Sleep(100);
    }
    cout<<"⛟ 2"<<endl;
    cout<<endl;
    if (truck2_total<truck1_total){
        cout<<"Truck 1 traveled more!"<<endl;
    }
    else if (truck1_total<truck2_total){
        cout<<"Truck 2 traveled more!"<<endl;
    }
    else
    cout<<"Both trucks traveled same!"<<endl;
    return 0;
}