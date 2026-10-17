#include<iostream>
using namespace std;

int main(){
    int number , evenSum = 0 , oddSum = 0;
    cout << "Enter a Number: ";
    cin >> number;

    for (int i = 1; i <= number; i++){
        if (i % 2 == 0){
            evenSum += i;
        }else {
            oddSum += i;
        }
    }
    cout << "Sum of Even number is: " << evenSum << endl;
    cout << "Sum of Odd numbers is: " << oddSum << endl;
}