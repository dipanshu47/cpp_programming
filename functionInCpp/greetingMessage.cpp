#include <iostream>
using namespace std;

void greet(string name){
    cout << "Good Morning, " << name << endl;
}

int main() {
    cout << "Enter Your Name: " ;
    
    string userName;
    cin >> userName;

    greet(userName);
    return 0;
}