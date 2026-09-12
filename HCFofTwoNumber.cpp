#include <iostream>
using namespace std;

int main() {
    int first, second;
    cout << "Enter the first Number: ";
    cin >> first;

    cout << "Enter the second Number: ";
    cin >> second;

    int greater = 0;
    int hcf = 1;

    if (first > second){
        greater = first;
    }else {
        greater = second;
    }

    for (int i= 1; i <= greater ; i++){
        if (first % i == 0 && second % i == 0){
            hcf = i;
        }
    }
    cout << "HCF is: " << hcf << endl;
        
    return 0;
}