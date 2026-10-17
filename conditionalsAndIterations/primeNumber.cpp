#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter a number: " ;
    cin >> number;

    int count = 0;
    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            count ++;
        }
    }

    if (count > 2){
        cout << "Number is NOT PRIME" << endl;
    } else {
        cout << "Number is PRIME" << endl;
    }

    return 0;
}