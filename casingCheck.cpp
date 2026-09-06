#include <iostream>
using namespace std;

int main () {

    char ch;

    cout << "Enter the Letter: " ;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "\"" << ch << "\"" << " Is Lowercase" << endl;
    } else if (ch >= 'A' && ch <= 'Z'){
        cout << "\"" << ch << "\"" << " Is Uppercase" << endl;
    }else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}