// PatternPrinting.cpp

#include <iostream>
using namespace std;

// Program 1: Simple Star Pattern
void pattern1() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 2: Inverted Star Pattern
void pattern2() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 3: Pyramid Pattern
void pattern3() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 4: Inverted Pyramid Pattern
void pattern4() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 5: Hollow Square Pattern
void pattern5() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Program 6: Hollow Pyramid Pattern
void pattern6() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1) || i == 5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Program 7: Diamond Pattern
void pattern7() {
    pattern3(); // upper part
    pattern4(); // lower part
}

// Program 8: Numeric Triangle Pattern
void pattern8() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Program 9: Alphabet Triangle Pattern
void pattern9() {
    for(int i = 1; i <= 5; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

// Program 10: Rhombus Pattern
void pattern10() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 11: Right-Angled Triangle Pattern
void pattern11() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Program 12: Hollow Diamond Pattern
void pattern12() {
    pattern6(); // upper part
    pattern6(); // lower part
}

// Program 13: Cross Pattern
void pattern13() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if(i == j || i + j == 6) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Program 14: Checkerboard Pattern
void pattern14() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Program 15: Spiral Pattern
void pattern15() {
    // Spiral pattern logic can be complex to implement
    // Placeholder for actual logic
    cout << "Spiral Pattern: Not implemented" << endl;
}

// Program 16: Zigzag Pattern
void pattern16() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Program 17: Number Pyramid Pattern
void pattern17() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();
    pattern13();
    pattern14();
    pattern15();
    pattern16();
    pattern17();
    return 0;
}
