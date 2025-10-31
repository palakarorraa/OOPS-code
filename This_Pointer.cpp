#include <iostream>
using namespace std;

class Box {
    int length;
    public:
    void setLength(int length) {
        this->length = length;
    }

    void show() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b1;
    b1.setLength(25);
    b1.show();
    return 0;
}
