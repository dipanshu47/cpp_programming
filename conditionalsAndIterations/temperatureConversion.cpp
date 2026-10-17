#include <iostream>
using namespace std;

int main() {
    float celsius;
    
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius ;

    // Celsius to Fehrenheit 
    float Fehrenheit = ((celsius * 9) /5) + 32;
    cout << "Temperature in Fehrenheit is: " << Fehrenheit << endl; 

    // Celsius to Kelvin
    float kelvin = 273.15 + celsius; 
    cout << "Temperature in Kelvin is: " << kelvin << endl;
    return 0;
}