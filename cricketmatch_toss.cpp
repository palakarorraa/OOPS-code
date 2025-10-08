#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Toss{
private:
    int result;
public:
    Toss(){
        srand(time(0));
        result = rand() % 2;
    }

    void showResult(){
        cout<<"Coin Toss Result: "<<(result == 0 ? "Head" : "Tail")<<endl;
        cout<<"Batting Team: "<<(result == 0 ? "India" : "Pakistan")<<endl;
    }
};

int main(){
    Toss toss;
    toss.showResult();
    return 0;
}