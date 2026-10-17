#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the Number: " ;
    cin >> number;

    int copy = number;
    int sum = 0;

    while (number != 0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (copy % sum == 0 ){
        cout << "HARSHAD NUMBER" << endl;
    } else {
        cout << "NOT HARSHAD NUMBER" << endl;
    }
    return 0;
}