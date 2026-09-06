#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the Number: ";
    cin >> number ;

    if (number > 0){
        cout << "Number is Positive" << endl ;
    }else if (number < 0){
        cout << "Number is Negative" << endl;
    }else {
        cout << "Number is zero" << endl;
    }
    
    return 0;
}