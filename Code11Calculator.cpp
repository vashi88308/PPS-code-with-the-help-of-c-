 // Calculator

// WAP that takes two operands and one operator from the user, 
// perform the operation, and prints the result by using Switch statement.

#include <iostream>
using namespace std;

int main () {
    char OP;
    int a,b;
    cout << "Enter first number (a) : ";
    cin >> a;
    cout << "Enter operator(+, -, *, %, /):  ";
    cin >> OP;
    cout << "Enter second number (b) : ";
    cin >> b;
    switch (OP)  {
    case '+':
    cout << "\na+b=" << a+b;
    break;
    case '-':
    cout << "\na-b=" << a-b;
    break;
    case '*':
    cout << "\na*b=" << a*b;
    break;
    case '%':
    cout << "\na%b=" << a%b;
    break;
    case '/':
    cout << "\na/b=" << a/b;
    break;

    default:
    cout << "Invalid input"; 
    }
    return 0; 


}