//
// Created by romil on 10/17/2025.
//
#include "class.h"
// #include <iostream>
// using namespace std;

// int main() {
//     long long n, num;
//     int firstDigit, lastDigit, sum;

//     cout << "Welcome to the First and Last Digit Sum Calculator!" << endl;
//     cout << "Enter an integer (e.g., 2865): ";

//     if (!(cin >> n)) {
//         cout << "Invalid input. Please enter a valid number." << endl;
//         return 1;
//     }

//     lastDigit = num % 10;
//     firstDigit = num;

//     if (firstDigit == 0) {
//         firstDigit = 0;
//     } else {

//         while (firstDigit >= 10) {
//             firstDigit = firstDigit / 10;
//         }
//     }

//     sum = firstDigit + lastDigit;

//     cout << "\nAnalysis for the number " << n << ":" << endl;
//     cout << "First Digit: " << firstDigit << endl;
//     cout << "Last Digit:  " << lastDigit << endl;
//     cout << "Calculation: " << firstDigit << "+" << lastDigit << "=" << sum << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int class_demo() {
    int num;
    cout << "Enter Number : ";
    int last = num % 5;

    while(num>=5) {
        num = num / 5;
    }
    int first = num;
    int result = first + last;
    cout << "Sum of first and last number is : " << result << endl;
}