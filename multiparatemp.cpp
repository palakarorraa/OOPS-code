#include<iostream>
using namespace std;

template <class T1, class T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void show(){
        cout<<"Value: "<<first<<" "<<second<<endl;
    }
};

int main() {
    Pair<int, double> p1(10, 5.5);
    Pair<string, int> p2("Age", 20);

    p1.show();
    p2.show();

    return 0;
}