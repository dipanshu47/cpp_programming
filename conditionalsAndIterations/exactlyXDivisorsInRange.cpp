#include <iostream>
using namespace std;

int main() {
    int num, range;

    cout << "Enter the Number: ";
    cin >> num;
    
    cout << "Enter the number of Divisors you want to check For: ";
    cin >> range;

    int finalCount = 0;

    for (int i = 1; i <= num; i++){
        int count = 0;

        for (int j = 1; j<= i ; j++){
            if (i % j == 0){
                count ++;
            }
        }
        if (count == range){
            finalCount++;
        }
    }
    cout << "Total Numbers with exactly " << range << " Divisors are: " << finalCount << endl;
    
    return 0;
}