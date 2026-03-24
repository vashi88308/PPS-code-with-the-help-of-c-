

// WAP to print the sum of all numbers up to a given number.  Eg n=5, Sum =5+4+3+2+1=15

#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"Enter number : ";
    cin >> n;
    int sum=0;

    for (int i=1; i<=n; i++ ) {
        sum = sum +i;
    }
    cout << "Sum = " << sum;


}