#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n; 
    
    int varInc = 1;
    
    for (int i=1; i<=n ; i++){
        for (int j = 1; j <= i; j++){
            cout << varInc << " ";
            varInc++;
        }
        cout << endl;
    }
    return 0;
}