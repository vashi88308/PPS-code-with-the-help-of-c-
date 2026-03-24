

  // WAP that accepts the temperature in Centigrade 
  // and converts into Fahrenheit using the formula C/5=(F-32)/9.

#include <iostream>
using namespace std;

int main() {
    float C, F;
    cout << "Enter temperature in Centigrade: ";
    cin >> C;

    F = (9.0/5) * C + 32;

    cout << "\nTemperature in Fahrenheit is = " << F;
    
    return 0;
}