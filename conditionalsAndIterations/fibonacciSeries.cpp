#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter the Number: ";
    cin >> number;

    int first = 0 , second = 1;

    for (int i = 1 ; i <= number; i++){

        cout << first << " ";

        int next = first + second ;
        first = second ;
        second = next;

    } 
    return 0;
}