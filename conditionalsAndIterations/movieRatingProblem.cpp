#include <iostream>
using namespace std;

int main() {
    string movieName;
    float rating;

    cout << "Enter the movie name: ";
    cin >> movieName;

    cout << "Rate the movie: ";
    cin >> rating;

    if(rating >= 0.0 && rating <= 2.0){
        cout << movieName << endl;
        cout << "Flop Movie" << endl;
    } else if (rating >= 2.1 && rating <=3.4) {
        cout << movieName << endl;
        cout << "Semi Hit Movie" << endl; 
    } else if (rating >= 3.5 && rating <= 4.5) {
        cout << movieName << endl;
        cout << "Hit" << endl;
    }else if (rating >= 4.6 && rating <= 5.0){
        cout << movieName << endl;
        cout << "Super Hit" << endl;
    }else{
        cout << "Enter the rating between 0.0 to 5.0 for: " << movieName << endl;
    }
    return 0;
}