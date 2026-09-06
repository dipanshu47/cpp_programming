#include <iostream>
using namespace std;

int main() {
    int length , breadth;

    cout << "Enter the Length: ";
    cin >> length;

    cout << "Enter the breadth: ";
    cin >> breadth;

    double area = length * breadth;

    cout << "Area of rectangle is: " << area << endl;
    return 0;
}