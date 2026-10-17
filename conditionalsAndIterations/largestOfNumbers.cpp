#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the First Number: " ;
    cin >> a ;

    cout << "Enter the Second Number: " ;
    cin >> b;

    if (a > b){
        cout << a << " Is greater than " << b << endl; 
    }else {
        cout << b << " Is greater thean " << a << endl; 
    }

    int c;

    cout << "Enter the Third Number: ";
    cin >> c; 

    if (a > b && a > c){
        cout << a << " is greater than B and C" << endl;
    }else if (b > c && b > a) {
        cout << b << " is greater than A and C" << endl;
    }else {
        cout << c << " is greater than A and B" << endl;
    }
    
    return 0;
}