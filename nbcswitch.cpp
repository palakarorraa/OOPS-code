#include <iostream>
using namespace std;

int main() {
    char branch;
    float bill, finalBill;

    cout << "Enter bill amount: ";
    cin >> bill;
    cout << "Choose branch (J=Jaipur, D=Delhi, M=Mumbai): ";
    cin >> branch;

    switch(branch) {
        case 'J':
        case 'D':
            if(bill > 500){
                finalBill = bill * 0.5;
                cout << "Congratulations! Offer applied.\n";
            }else{
            finalBill = bill;
                cout << "Sorry! Bill below 500, no offer.\n";
            }
            break;
        case 'M':
            finalBill = bill;
            cout << "Sorry! Offer is not applied in this branch.\n";
            break;
        default:
            cout << "Invalid branch!";
            return 0;
    }
    cout << "Final Bill: " << finalBill;
    return 0;
}
