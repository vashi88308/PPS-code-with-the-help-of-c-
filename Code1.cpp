
  // 1. WAP that accepts the marks of 5 subjects and 
  // finds the sum and percentage marks obtained by the student

#include <iostream>
using namespace std;
int main () {
    int Maths, Chem, Phy, Bio, English;
    cout <<"Maths:\n";
    cin >> Maths;
    cout << "Chem: \n"; 
    cin >> Chem;
    cout<< "Phy: \n"; 
    cin >>  Phy;
    cout << "Bio: \n"; 
    cin >> Bio;
    cout << "English:\n";
    cin >> English;
    int sum = (Maths + Chem + Phy + Bio + English);
    float avg = sum/5;
    cout << "\nSum of 5 subjects is :" << sum << "\naverage of 5 subjects is " << avg;
    return 0;
}