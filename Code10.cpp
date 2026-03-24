
// WAP that accepts marks of five subjects and finds percentage and prints grades 
// according to the following criteria:
// Between 90-100% Print 'A'
// 80-90%-Print 'B'
// 60-80% Print 'C'
// Below 60% Print 'D

#include <iostream>
using namespace std;

int main () {
    int Maths, Chem, Phy, Bio, English;
    cout <<"Enter Maths marks: ";
    cin >> Maths;
    cout << "Enter Chemistry marks : "; 
    cin >> Chem;
    cout<< "Enter Physics marks: "; 
    cin >>  Phy;
    cout << "Enter Bio marks: "; 
    cin >> Bio;
    cout << "Enter English marks: ";
    cin >> English;
    
    int sum = (Maths + Chem + Phy + Bio + English);
    float perc = sum/5;

    if ( perc >=90) {
        cout << "Grade = A";
    }
    else if (perc >= 80 && perc < 90) {
        cout << "Grade = B"; 
    }
    else if (perc >=60 && perc > 80) {
        cout << "Grade = c";
    }
    else {
        cout << "Grade = D";
    }

    return 0;
}