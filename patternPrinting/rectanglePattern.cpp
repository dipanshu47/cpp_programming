#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "Enter the Number of rows: ";
    cin >> rows;

    cout << "Enter the Number of columns: ";
    cin >> columns;

    for (int i = 1; i <= columns ; i++){
        for (int j = 1; j <= rows; j++){
            cout << "* ";
        }
        cout << endl;
    }
}