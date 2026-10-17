#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float number;
    cout << "Enter a Number: ";
    cin >> number;
    
    float squareNum = sqrt(number);

    if (fmod(number , squareNum) == 0){
        cout << "It is perfect square" << endl;
    } else {
        cout << "Not a perfect square" << endl;
    }
    return 0;
}