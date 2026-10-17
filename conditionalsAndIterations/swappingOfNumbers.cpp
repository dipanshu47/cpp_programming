#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first Number: ";
    cin >> a;

    cout << "Enter the second Number: ";
    cin >> b;

    // Swapping using Temporary Variable 

    int c = a;
    a = b ;
    b = a;
    
    cout << "After swapping \"A\" becomes: " << a << " and \"B\" becomes: " << b << endl;

    // Swapping without using temporary variable 

    a = a + b ;
    b = a - b ;
    a = a - b ;

    cout << "After swapping \"A\" becomes: " << a << " and \"B\" becomes: " << b << endl;

    
    return 0;
}