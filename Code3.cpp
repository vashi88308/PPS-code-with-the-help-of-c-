
   // WAP to calculate the area and circumference of a circle.

#include <iostream>
#define PI 3.1415
using namespace std;

int main() {
    double r;

    cout << "Enter Radius of circle: ";
    cin >> r;

    // Area of circle 
    double area = PI * r *r;

    // Circumference of circle
    double circ = 2 * PI * r;

    cout << "\nArea of circle is = " << area;
    cout << "\nCircumference of circle is = " << circ;

    return 0;
}