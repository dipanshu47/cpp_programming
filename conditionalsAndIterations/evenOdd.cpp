#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: " ;
    cin >> number;

    if (number % 2 == 0){
        cout << number << " Is Even." << endl;
    }else {
        cout << number << " Is Odd." << endl;
    }
    
    return 0;
}