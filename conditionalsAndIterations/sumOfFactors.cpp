#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a Number: ";
    cin >> number;

    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            sum += i;
        }
    }
    cout << "Sum of Factors is : " << sum << endl;
    return 0;
}