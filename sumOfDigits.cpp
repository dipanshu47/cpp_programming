#include <iostream>
using namespace std;

int main() {
    long long int number;
    cout << "Enter a number: ";
    cin >> number;

    int sumOfNumber = 0;

    do {
        int lastDigit = number % 10;
        sumOfNumber = lastDigit + sumOfNumber;
        number /= 10;
    } while( number != 0);

    cout << "Sum of Digits of Number is: " << sumOfNumber << endl;
    return 0;
}