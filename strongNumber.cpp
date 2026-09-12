#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int copy = number;
    
    int factorialSum = 0;
    
    while (number != 0){
        int lastDigit = number % 10;

        int factorial = 1;
        for(int i = 1; i <= lastDigit; i++){
            factorial = factorial * i;
        }

        factorialSum += factorial;
        number /= 10; 
    }

    if (copy == factorialSum){
        cout << "STRONG NUMBER" << endl;
    } else {
        cout << "NOT A STRONG NUMBER"  << endl;
    }
    return 0;
}