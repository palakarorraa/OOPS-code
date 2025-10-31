#include <iostream>
using namespace std;

class A{
    int *p;
    public:
    A(int val) {
        p = new int;
        *p = val;
    }

    void show() {
        cout << "Value: " << *p << endl;
    }

    ~A() {
        delete p;
        cout << "Memory released" << endl;
    }
};

int main() {
    A ob(50);
    ob.show();
    return 0;
}
