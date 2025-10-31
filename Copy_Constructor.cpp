#include <iostream>
using namespace std;

class Student {
    int id;
    public:
    Student(int x) {
        id = x;
    }

    Student(const Student &s) {
        id = s.id;
        cout << "Copy constructor " << endl;
    }

    void show() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;

    s1.show();
    s2.show();
    return 0;
}
