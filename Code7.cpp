

  // WAP to find the greatest of three numbers.

#include <iostream> 
using namespace std;
int main () {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "\nFirst number is greater";
    }
    else if (b >= c) {
        cout << "\nSecond number is greater";
    }
    else {
        cout << "Third number is greater";
    }
    return 0;
}