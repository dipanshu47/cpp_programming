#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    cout << "Printing Numbers from " << number << " to 1." << endl;
    for (int j = number ; j >= 1 ; j--){
        cout << j << endl ;
    }

    return 0;
}