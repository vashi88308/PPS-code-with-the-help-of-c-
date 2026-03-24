

// WAP to print sum of even and odd numbers from 1 to N numbers.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<" Enter number: ";
    cin >> n;
    int even_sum=0;
    int odd_sum=0;

    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            even_sum += i;
        }
        else {
            odd_sum +=i;
        }
    }    
    cout <<"\nSum of even number is = " << even_sum;
    cout <<"\nSum of odd number is = " << odd_sum;
    
    return 0;
}
