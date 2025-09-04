#include<iostream>
using namespace std;

class Math {
public:
    inline void cube(int x) {  
        cout << "Cube of " << x << " is: " << (x * x * x) << endl;
    }
};

int main() {
    Math m;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    m.cube(num);

    return 0;
}
