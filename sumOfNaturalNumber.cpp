#include <iostream>
using namespace std;

int main() {
    int number , sum = 0;
    cout << "Enter a Number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        sum = sum + i;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}