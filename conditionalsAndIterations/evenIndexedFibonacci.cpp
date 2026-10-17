#include <iostream>
using namespace std;

int main() {
    int number; 
    cout << "Enter the number of Iterations: ";
    cin >> number;

    int first = 0, second = 1;
    int next;
    int sum = 0;

    for (int i = 1; i < number; i++){
        if (i % 2 == 0){
            sum = sum + first;
        }
        next = first + second ;
        first = second; 
        second = next;
    }

    cout << "Sum of even Indexed Fibonacci is: " << sum << endl;
    
    return 0;
}