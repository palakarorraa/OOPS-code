#include<iostream>
using namespace std;

class Math {
public:
    void show(int x, int y); 
};

inline void Math::show(int x, int y) {
    cout << "Sum of " << x << " and " << y << " is: " << (x + y) << endl;
}

int main() {
    Math m;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    m.show(a, b);

    return 0;
}
