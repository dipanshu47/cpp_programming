#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    int sum = 0;
    int copy = number;

    for (int i = 1; i < number; i++){
        if (number % i == 0){
            sum = sum + i;
        }
    }

    if (sum > copy){
        cout << "IT IS AN ABUNDANT NUMBER" << endl;
    }else {
        cout << "NOT AN ABUNDANT NUMBER" << endl;
    }
    return 0;
}