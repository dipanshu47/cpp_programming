#include <iostream>
using namespace std;

int main() {
    int number; 
    int first = 1 , second = 2;
    int next = first + second ;
    cout << "Enter the Number: ";
    cin >> number;

    for (int i = 4 ; i <= number; i++){
        first = i;
        second = first;
        next = first + second ;
    }
    cout << next << endl; 
    return 0;
}