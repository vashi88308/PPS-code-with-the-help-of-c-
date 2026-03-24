

// WAP that telis whether a given year is a leap year or not

#include <iostream> 
using namespace std;
int main () {
    int year;
    cout << "Enter year : ";
    cin >> year;

    if (year % 400 == 0 || (year % 4==0 && year % 100!=0)) {   // 400 se divisible ho agar nhi ho rha
        cout << year << " is leap year";                   // to 4 se divisible ho lekin 100 se na ho
    }
    else {
        cout << year << " is not a leap year";
    }
    return 0;
}