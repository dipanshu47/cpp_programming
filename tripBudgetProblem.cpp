#include <iostream>
using namespace std;

int main() {
    double money, food, movies, travel;

    cout << "Enter the amount of money you have: ";
    cin >> money ;

    cout << "Enter the amount required for food: ";
    cin >> food ;

    cout << "Enter the amount required for movies: ";
    cin >> movies ;

    cout << "Enter the amount required for travel: ";
    cin >> travel;

    if (  money >= (food + movies +travel)){
        cout << "Plan approved" << endl;
        cout << "Amount remaining is: " << (money - (food + movies + travel)) << endl;
    }else{
        cout << "Plan cancelled" << endl;
        cout << "Amount short: " << ((food + travel + movies) - money) << endl;
    }

    return 0;
}