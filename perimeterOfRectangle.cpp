#include <iostream>
using namespace std;

int main() {
    int length, breadth;

    cout << "Enter the Length: ";
    cin >> length ;

    cout << "Enter the breadth: ";
    cin >> breadth ;

    double perimeter = 2 * (length + breadth);

    cout << "Perimeter of Reactangle is: " << perimeter << endl;
    return 0;
}