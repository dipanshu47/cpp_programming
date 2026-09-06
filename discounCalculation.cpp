#include <iostream>
using namespace std;

int main() {
        int amount , dis;
        double discountedAmount = 0.0;

        cout << "Enter the total Amount: " ;
        cin >> amount ;

        if(amount >= 500 && amount < 1000){
            dis = 5;

            discountedAmount = (amount * dis ) / 100;
            cout << "Discounted Amount is : " <<  discountedAmount << endl;

        }else if (amount >= 1000 && amount <= 4999){
            dis = 10;

            discountedAmount = (amount * dis ) / 100 ;
            cout << "Discounted Amount is : " << discountedAmount <<  endl;

        }else if (amount >= 5000 && amount <= 9999){
            dis = 20;

            discountedAmount = (amount * dis ) / 100 ;
            cout << "Discounted Amount is : " << discountedAmount << endl;

        }else if (amount >= 10000){
            dis = 30;

            discountedAmount = (amount * dis) / 100;
            cout << "Discountded Amount is : " << discountedAmount << endl;

        }else {
            cout << "No Discount Applicable" << endl;
        }

        double billingAmount = amount - discountedAmount;
        cout << "Amount after Discount is : " << billingAmount << endl;

    return 0;
}