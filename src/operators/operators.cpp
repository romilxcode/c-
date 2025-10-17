//
// Created by romil on 10/17/2025.
//
#include "operators.h"
// Arithmetic operators

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 5;

//     cout << "sum = " << (a + b) << endl;
//     cout << "difference = " << (a - b) << endl;
//     cout << "product = " << (a * b) << endl;
//     cout << "division = " << (a / b) << endl;
//     cout << "modulo = " << (a % b) << endl;
//     return 0;
// }

// Relational operators

// #include <iostream>
// using namespace std;

// int main() {

//     cout << (3 < 5) << endl; // true -> 1
//     cout << (3 > 5) << endl;
//     cout << (3 >= 3) << endl;
//     cout << (3 <= 5) << endl;
//     cout << (3 == 3) << endl;
//     cout << (3 != 5) <<endl;

//     return 0;
// }

// Logical operator

// #include <iostream>
// using namespace std;

// int main() {

//     cout << !(3 > 1) << endl; // logical not
//     cout << ((3 < 1) || (3 < 5)) << endl; // or
//     cout << ((3 > 2) && (3 > 5)) << endl;
// }

// Sum of 2 numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << " enter a : ";
//     cin >> a;

//     cout << "enter b : ";
//     cin >> b;

//     int sum = a + b;
//     cout << "sum = " <<sum << endl;
//     return 0;
// }

// Unary operators

#include <iostream>
using namespace std;

int class_operators() {

    int a = 10;

    int b = ++a;
    cout <<  b << endl;
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;
    return 0;
}