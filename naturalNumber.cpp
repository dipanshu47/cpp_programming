#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter the Number: ";
    cin >> number;

    cout << "Printing Numbers from 1 to " << number << endl;
    for (int i = 1; i <= number ; i++){
        cout << i << endl;
    }
    return 0;
}