#include <iostream>
using namespace std;

int main() {
    char gender, qualification;
    int experiance; 
    int salary;

    cout << "Enter your Gender (M for male, F for female): ";
    cin >> gender;

    cout << "Enter your qualification (P for Post- graduate, G for graduate): ";
    cin >> qualification;

    cout << "Enter the years of experiance: ";
    cin >> experiance;

    if (gender == 'M' || gender == 'm'){
        if (experiance >= 10){
            if (qualification == 'P' || qualification == 'p'){
                cout << "Salary is: Rs. 15,000" << endl;
            } else if (qualification == 'G' || qualification == 'g'){
                cout << "Salary is: Rs. 10,000" << endl;
            } else{
                cout << "Invalid qualification input" << endl;
            }
        } else if (experiance < 10 ){
            if (qualification == 'P' || qualification == 'p'){
                cout << "Salary is: Rs. 10,000" << endl;
            } else if (qualification == 'G' || qualification == 'g'){
                cout << "Salary is: Rs. 7,000" << endl;
            } else{
                cout << "Invalid qualification input" << endl;
            }
        } else {
            cout << "Invalid experiance entered" << endl;
        }
    } else if (gender == 'F' || gender =='f'){
        if (experiance >= 10){
            if (qualification == 'P' || qualification == 'p'){
                cout << "Salary is: Rs. 12,000" << endl;
            } else if (qualification == 'G' || qualification == 'g'){
                cout << "Salary is: Rs. 9,000" << endl;
            } else{
                cout << "Invalid qualification input" << endl;
            }
        } else if (experiance < 10 ){
            if (qualification == 'P' || qualification == 'p'){
                cout << "Salary is: Rs. 10,000" << endl;
            } else if (qualification == 'G' || qualification == 'g'){
                cout << "Salary is: Rs. 6,000" << endl;
            } else{
                cout << "Invalid qualification input" << endl;
            }
        } else {
            cout << "Invalid experiance entered" << endl;
        }
    } else {
        cout << "Invalid gender input" << endl;
    }
    return 0;
}