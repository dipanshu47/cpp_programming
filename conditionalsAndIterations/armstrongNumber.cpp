#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: " ;
    cin >> number;

    int copy = number;
    int cubeSum = 0;

    while (number != 0){
        int digit = number % 10;
        int cubedDigit = digit * digit * digit;
        cubeSum += cubedDigit;
        number /= 10;
    }

    if (copy == cubeSum){
        cout << "ARMSTRONG NUMBER" << endl;
    } else {
        cout << "NOT AN ARMSTRONG NUMBER" << endl;
    }
    return 0;
}