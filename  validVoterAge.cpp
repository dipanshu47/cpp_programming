#include <iostream>
using namespace std;

int main() {
    int age; 

    cout << "Enter your Age: " ;
    cin >> age ;

    if (age >= 18 ){
        cout << "You are eligible to vote. (But who the hell care about about your voting rightss.....)" << endl;
    }else {
        cout << "Not eligible to vote. (Doesn't matter though.....U know who is going to win...)" << endl;
    }
    return 0;
}