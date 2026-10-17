#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the First Number: " ;
    cin >> a;

    cout << "Enter the Second Number: ";
    cin >> b; 

    // Using square root Function 
    cout << "Square root of First number is : " << sqrt(a) << endl;
    cout << "Square root of second number is : " << sqrt(b) << endl;

    // Using cube root Function 
    cout << "Cube root of First number is : " << cbrt(a) << endl;
    cout << "Cube root of second number is : " << cbrt(b) << endl;

    // Using power function 
    cout << a << " to the power of " << b << " is : " << pow(a, b) << endl;

    // Using logarithmic function 
    cout << "Log of " << a << " is : " << log10(a) << endl;
    cout << "Log of " << a << " is : " << log10(b) << endl;

    // Using minimum function 
    cout << "Minimum of " << a << " and " << b << " is : " << min(a,  b) << endl;

    // Using maximum function 
    cout << "Maximum of " << a << " and " << b << " is : " << max(a, b) << endl;


    double decimalNumber ; 
    cout << "Enter a Negative decimal Number: " ;
    cin >> decimalNumber ;

    // Using absolute value function 
    cout << "Absolute vale of " << decimalNumber << " is : " << fabs(decimalNumber) << endl;

    // Using ceiling function 
    cout << "Ceil value of " << decimalNumber << " is : " << ceil(decimalNumber) << endl;

    // Using floor function 
    cout << "Floor value of " << decimalNumber << " is : " << floor(decimalNumber) << endl;

    // Using round of function 
    cout << "Round-off of " << decimalNumber << " is : " << round(decimalNumber) << endl;

    // Using truncate function 
    cout << "Chopped value of " << decimalNumber << " is : " << trunc(decimalNumber) << endl;

    // Using fmod function to find remainder of decimal function 
    cout << "Remainder for decimal " << decimalNumber << " is : " << fmod(decimalNumber, 2) << endl;

    return 0;
}