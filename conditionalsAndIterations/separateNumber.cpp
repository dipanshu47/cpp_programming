#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: " ;
    cin >> number;
    int reverseNum = 0;

    while (number != 0 ){
        int digit = number % 10;
        reverseNum = reverseNum * 10 + digit;
        number /= 10;
    }

    int separatedNum = 0;

    while (reverseNum != 0){
        int digit = reverseNum % 10;
        cout << digit << " ";
        separatedNum = separatedNum * 10 + digit;
        reverseNum /= 10;
    }

    cout << " " << endl;

    // There is an issue to solve Here 
    return 0;
}