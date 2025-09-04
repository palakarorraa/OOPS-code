#include<iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;
};

int main() {
    Employee e[3];   

    
    e[0].id = 101;
    e[0].salary = 25000;

    e[1].id = 102;
    e[1].salary = 30000;

    e[2].id = 103;
    e[2].salary = 28000;


    cout << "Employee Details:\n";
    for(int i=0; i<3; i++) {
        cout << "ID: " << e[i].id << ", Salary: " << e[i].salary << endl;
    }

    return 0;
}
