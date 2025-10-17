//
// Created by romil on 10/17/2025.
//
#include "functions.h"
//
// Created by romil on 10/17/2025.
//
// #include <iostream>
// using namespace std;

// // functions definition
// int printHello() {
//     cout << "hello" << endl;
// }

// int run_function_tests() {
//     // functions call / invoke
//     int val = printHello();
//     cout <<  "val = " << val << endl;
//     cout << printHello() << endl;
//     return 0;
// }

//  calculate sum using int:

// #include <iostream>
// using namespace std;

// // sum of 2 number
// int sum(int a, int b) {
//     int s = a + b;
//     return s;
// }

// int run_function_tests() {
//     cout << sum (10, 5) << endl;

//     cout << (10+ 5)
//     return 0;
// }

// using float/double:

// #include <iostream>
// using namespace std;

// // sum of 2 number
// double sum(double a, double b) {
//     double s = a + b;
//     return s;
// }

// int run_function_tests() {
//     cout << sum (10.99, 5.65) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // sum of 2 number
// double sum(double a, double b) {
//     double s = a + b;
//     return s;
// }

// // min of 2 nums
// int minOfTwo(int a, int b) { // parameters
//     if(a < b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int run_function_tests() {
//     cout << "min = " << minOfTwo(5, 3) << endl; // arguments

//     return 0;
// }

// Qs: calculate sum of numbers from 1 to N.

// #include <iostream>
// using namespace std;

// //  sum of 2 number
// double sum(double a, double b) {
//     double s = a + b;
//     return s;
// }

// min of 2 nums
// int minOfTwo(int a, int b) { // parameters
//     if(a < b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int sumN(int n) {
//     int sum = 0;

//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }

//     return sum;
// }
// int run_function_tests() {
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }

// Qs: Calculate N factorial

// #include <iostream>
// using namespace std;

// int factorialN (int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int run_function_tests() {
//     cout << factorialN(4) << endl;
//     cout << factorialN(5) << endl;
//     return 0;
// }

// functions in memory

// #include <iostream>
// using namespace std;

// int condn (int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// void fun() {
//    if(condn(5)) {
//        // Do something if condn(5) returns a non-zero value
//    } else if(condn(0)) {
//        return;
//    } else {
//        // Do something else
//    }
// }

// int run_function_tests()) {
//     fun();
//     return 0;
// }

// Pass by value :
// copy of argument is passed to functions

// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     a = a + 10; // 15
//     b = b + 10; // 14
//     return a+b;
// }

// int run_function_tests() {
//     int a = 5, b= 4;
//     // cout << sum(a, b) << endl;
//     cout << sum(a,b) << endl;

//     cout << a <<endl;
//     cout << b <<endl;
//     return 0;
// }

// second program:

// #include <iostream>
// using namespace std;

// int changeX (int x) {
//     x = 2*x;
//     cout << "x = " << x <<endl;
// }

// int run_function_tests() {
//     int x = 5;
//     changeX(x);

//     cout << "x = " << x <<endl;
//     return 0;
// }

// Qs: Calculate sum of digits of a number.

// #include <iostream>
// using namespace std;

// int sumOfDigits (int num) {
//     int digSum = 0;

//     while(num > 0) {
//         int lastDig = num % 10;
//         num /= 10;
//         digSum += lastDig;
//     }

//     return digSum;
// }

// int run_function_tests() {
//     cout << "sum = " << sumOfDigits(2356) << endl;
//     return 0;
// }

// taking input from user:

// #include <iostream>
// using namespace std;

// int sumOfDigits (int num) {
//     int digSum = 0;

//     while (num > 0) {
//         int lastDig = num % 10;
//         num /= 10;
//         digSum += lastDig;
//     }

//     return digSum;
// }

// int run_function_tests() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     cout << "Sum = " << sumOfDigits(number) << endl;

//     return 0;
// }

// Qs: Calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

    int run_function_tests() {
        int n = 8, r = 2;
        cout << nCr(n, r);

        return 0;
    }
