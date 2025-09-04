#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, temp, digit, n = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp > 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    
    while(temp > 0) {
        digit = temp % 10;

        int power = 1;
        for(int i = 0; i < n; i++) {
            power *= digit;   
        }

        sum += power;
        temp /= 10;
    }

    if(sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}


