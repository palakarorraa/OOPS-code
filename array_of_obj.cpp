#include<iostream>
using namespace std;

class Book {
public:
    string name;
    int price;
};

int main() {
    Book b[3];  


    b[0].name = "C++ Programming";
    b[0].price = 400;

    b[1].name = "Data Science";
    b[1].price = 550;

    b[2].name = "AI & ML";
    b[2].price = 700;

    
    int maxIndex = 0;
    for(int i=1; i<3; i++) {
        if(b[i].price > b[maxIndex].price) {
            maxIndex = i;
        }
    }

    cout << " Expensive Book: " << b[maxIndex].name 
         << " (Price: " << b[maxIndex].price << ")" << endl;

    return 0;
}
