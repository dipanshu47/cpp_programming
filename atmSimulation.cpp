#include <iostream>
using namespace std;

int main() {
    int amount;
    int remainingAmount;

    cout << "Enter the amount: ";
    cin >> amount;

    if (amount >= 500){

        int notes500 = amount / 500;
        cout << "Number of 500 rupee notes: " << notes500 << endl;

        int notes = notes500 * 500;
        amount = amount - notes;

    } if (amount >= 200) {

        int notes200 = amount / 200;
        cout << "Number of 200 rupee notes: " << notes200 << endl;

        int notes = notes200 * 200;
        amount = amount - notes;

    } if (amount >= 100) {

        int notes100 = amount / 100;
        cout << "Number of 100 rupee notes: " << notes100 << endl;

        int notes = notes100 * 100;
        amount = amount - notes;

    } if (amount >= 50){

        int notes50 = amount / 500;
        cout << "Number of 50 rupee notes: " << notes50 << endl;

        int notes = notes50 * 50;
        amount = amount - notes;

    } if (amount >= 20 ){

        int notes20 = amount / 20;
        cout << "Number of 20 rupee notes: " << notes20 << endl;

        int notes = notes20 * 20;
        amount = amount - notes;
    } if (amount >= 10 ){

        int notes10 = amount / 10 ;
        cout << "Number of 10 rupee notes: " << notes10 << endl;

        int notes = notes10 * 10;
        amount = amount - notes;
    } if (amount >= 5 ){

        int notes5 = amount / 5;
        cout << "Number of 5 rupee notes: " << notes5 << endl;

        int notes = notes5 * 5;
        amount = amount - notes;
    } if ( amount >= 2){

        int notes2 = amount / 2 ;
        cout << "Number of 2 rupee notes: " << notes2 << endl;

        int notes = notes2 * 2;
        amount = amount - notes;
    } if (amount >= 1){

        int notes1 = amount / 1;
        cout << "Number of 1 rupee notes: " << notes1 << endl;

        int notes = notes1 * 1;
        amount = amount - notes;
    }
    return 0;
}