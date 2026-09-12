#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    for (int i = 1; i <= number ; i++){
        if (number % i == 0){
            cout << i << " is factor of " << number << endl;
        }
    }
    return 0;
}