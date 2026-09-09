#include <iostream>
using namespace std;

int main() {
    int base, exponent, newValue = 1;

    cout << "Enter the value of Base: " ;
    cin >> base;

    cout << "Enter the value of Exponent: ";
    cin >> exponent;

    int i = 1;
    while (i <= exponent){
        newValue = base * newValue;
        i++;
    }
    cout << "base of " << base << " to the exponent of " << exponent << " is : " << newValue << endl;

    return 0;
}