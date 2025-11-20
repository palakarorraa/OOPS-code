#include <iostream>
#include <fstream>
using namespace std;

class Student{
    string name;
    int attendance;

public:
    void setdata(string n, int a){
        name = n;
        attendance = a;
    }

    void infile(ofstream &file){
        file<<name<<": "<<attendance<<endl;
    }
};

void detain_list(){
    ifstream file("attendance.txt");

    string n;
    int a;

    cout<<"Name"<<"  "<<"Attendance"<<endl;

    while(file>>n>>a){
        if(a<75) {
            cout<<n<<"  "<<a<<"%"<<endl;}
        }
    file.close();
}


int main(){
    ofstream file("attendance.txt");

    Student s1, s2, s3;
    s1.setdata("Bob", 90);
    s2.setdata("Charlie", 20);
    s3.setdata("Alice", 72);

    
    
    s1.infile(file);
    s2.infile(file);
    s3.infile(file);

    file.close();
    detain_list();


    return 0;
}