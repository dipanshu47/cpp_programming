#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter a number to check: ";
    cin >> number; 
    int copy = number;

    int reversedNum = 0;

    while (number != 0){
        int digit = number % 10;
        reversedNum = reversedNum * 10 + digit;
        number /= 10;
    }
    if (copy == reversedNum) {
        cout << "NOT PALINDROME" << endl;
    }else {
        cout << "PALINDROME" << endl;
    }
    return 0;
}