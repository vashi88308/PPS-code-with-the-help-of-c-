

// WAP to find the factorial of a given number

#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<" Enter number: ";
    cin >> n;
    int sum=1;

    for (int i=1; i<=n; i++) {
        sum=sum*i;
    }
    cout << "Factorial of a given number is = " << sum;
    return 0;
}
