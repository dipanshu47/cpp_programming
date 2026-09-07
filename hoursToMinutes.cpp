#include <iostream>
using namespace std;

int main() {
    int minutes;

    cout << "Enter the number of minutes: " ;
    cin >> minutes;

    cout << (minutes/ 60) << " Hours " << (minutes % 60) << " Minutes" << endl;
    return 0;
}