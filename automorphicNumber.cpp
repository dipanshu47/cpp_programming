#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter a Number: ";
    cin >> number;

    int squaredNum = number * number;

    int numberSum = 0;
    int squareSum = 0;

    while (number != 0){
        int digit = number % 10;
        numberSum = numberSum + digit;
        number /= 10;

        int squareDigit = squaredNum % 10;
        squareSum = squareSum + squareDigit;
        squaredNum /= 10;
    }

    if (numberSum == squareSum){
        cout << "NUMBER IS AUTOMORPHIC" << endl;
    } else {
        cout << "NUMBER IS NOT AUTOMORPHIC" << endl;
    }
    

    return 0;
}