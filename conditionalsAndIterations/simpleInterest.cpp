#include <iostream>
using namespace std;

int main() {
    double principle, rate, time;

    cout << "Enter the Principle Amount: ";
    cin >> principle;

    cout << "Enter the rate of Interest: ";
    cin >> rate;

    cout << "Enter the time period: ";
    cin >> time;

    double simpleInterest = (principle * rate * time )/ 100 ;
    cout << "Simple Interest is: " << simpleInterest;
    
    return 0;
}