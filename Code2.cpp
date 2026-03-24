
  //   WAP that calculates the Simple Interest and 
 //  Compound Interest. The Principal, Amount Rate of Interest and time are entered 
  // through the keyboard.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, R, T;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate (%): ";
    cin >> R;

    cout << "Enter Time (years): ";
    cin >> T;

    // Simple Interest
    double SI = (P * R * T) / 100;  // double is used for accurate decimal

    // Compound Interest
    double CI = P * (pow(1 + R/100, T) - 1);

    cout << "\nSimple Interest = " << SI;
    cout << "\nCompound Interest = " << CI;

    return 0;
}