#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial does not exist for negative numbers.";
    }
    else {
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " = " << fact;
    }

    return 0;
}
