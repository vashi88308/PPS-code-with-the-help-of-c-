

// WAP that swaps values of two variables using a third variable.

#include <iostream> 
using namespace std;
int main () {
    int a,b,c;
    cout << " Enter value of a : ";
    cin >> a;
    cout << " Enter value of b : ";
    cin >> b;

    c=a;
    a=b;
    b=c;

    cout << "\nSwap value a= " << a; 
    cout << "\nSwap value b= " << b;
    return 0; 

}