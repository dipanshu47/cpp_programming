#include <iostream>
using namespace std;

int main() {
    
    int n; 
    cout << "Enter a Number: ";
    cin >> n; 

    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= i ; j++){
            if (i == j || i == n || j == 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}