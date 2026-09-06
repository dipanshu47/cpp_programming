#include <iostream>
using namespace std;

int main() {

    int unit;
    double amount = 0.0;

    cout << "Enter the amount of units Consumed: " ;
    cin >> unit;

    if (unit > 300){
        unit = unit - 300;

        int newAmount = unit * 5.00;

        amount += newAmount;
        unit = 300;

    }if (unit >= 201 && unit <= 300){
        unit = unit - 200;

        int newAmount = unit * 4.00;

        amount += newAmount; 
        unit = 200;

    }if (unit > 100 && unit <= 200){
        unit = unit - 100;

        int newAmount = unit * 2.50;

        amount += newAmount;
        unit = 100;

    }if (unit <= 100) {

        int newAmount = unit * 1.50;
        amount += newAmount;
    }

    double billingAmount = amount + 50; 
    cout << "Your total bill is: " << billingAmount << endl;

    return 0;
}