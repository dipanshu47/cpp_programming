#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    int total = 1;
    for (int i = 1; i <= number; i++){
        number /= 10;
        total++;
    }
    cout << "Total Digits are: " << total << endl;
    return 0;
}