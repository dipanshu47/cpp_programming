#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter the Year: ";
    cin >> year;

    if ( year % 100 != 0 && year % 4 == 0 || year % 4 == 400){
        cout << "Year is leap Year" << endl;
    }else{
        cout << "Year is not Leap Year" << endl;
    }

    return 0;
}