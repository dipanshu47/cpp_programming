#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n; j++){
            if(j==((n+1)/2) || i == ((n+1)/2)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}