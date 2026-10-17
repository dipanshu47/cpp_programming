#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (number == 1 || number == 0) {
        cout << "No prime factors";
    } 
    else {
        for (int i = 2; i <= number; i++) {

            while (number % i == 0) {
                cout << i << " ";
                number = number / i;
            }
        }
    }

    return 0;
}
