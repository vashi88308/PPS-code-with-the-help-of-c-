

   // WAP that checks whether the two numbers entered by the user are equal or not.

#include <iostream> 
using namespace std;
int main () {
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a==b) {
        cout << "Numbers are equal ";
    }
    else {
        cout << "Numbers are not equal";
    }

    return 0;
}