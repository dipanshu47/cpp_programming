#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    int squaredNum = number * number;
    int copy = number ;
    int sumOfSquaredNum = 0;

    while (squaredNum != 0){
        int digit = squaredNum % 10;
        sumOfSquaredNum = sumOfSquaredNum + digit;
        squaredNum /= 10;
    }

    if (copy == sumOfSquaredNum){
        cout << "IT IS NEON NUMBER" << endl;
    } else {
        cout << "NOT A NEON NUMBER" << endl;
    }
    return 0;
}