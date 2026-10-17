#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c ;

    int sum = a + b + c;

    double average = (double)sum / 3.0 ; 

    cout << "Sum is " << sum << " and Average is: " << average ;
    return 0;
}