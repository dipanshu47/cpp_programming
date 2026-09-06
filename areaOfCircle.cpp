#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    double area = M_PI * radius * radius;
    cout << "Area of Circle is: " << area << endl;
    return 0;
}