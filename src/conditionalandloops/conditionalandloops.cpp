//
// Created by romil on 10/17/2025.
//
#include "conditionalandloops.h"
// #include<iostream>
// using namespace std;

// int main() {
//   int n = 45;

//   if(n>=0) {
//     cout << "n is positive" <<endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//   int age;
//   cout << "enter age : ";
//   cin >> age;

//   if(age >= 18) {
//     cout <<"you can vote" <<endl;
//   } else {
//     cout << "you can't vote" <<endl;
//   }

//   return 0;
// }

// odd or even number

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cout << "enter number : ";
//   cin >> n;

//   if(n%2 == 0) {
//     cout << "even" <<endl;
//   } else {
//     cout<< "odd" <<endl;
//   }

//   return 0;
// }

// else if

// #include <iostream>
// using namespace std;

// int main() {
//   int marks;
//   cout << "enter marks : ";
//   cin >> marks;

//   if(marks >= 90) {
//     cout << "A" <<endl;
//   } else if(marks >= 80 && marks < 90) {
//     cout << "B" <<endl;
//   } else {
//     cout << "C" <<endl;
//   }
//   return 0;
// }

// Qs: Find character lowercase or uppercase

// #include <iostream>
// using namespace std;

// int main() {
//   char ch;
//   cout << "enter : " <<endl;
//   cin >> ch;

//   if(ch >= 'a' && ch) {
//     cout << "lowercase" <<endl;
//   } else {
//     cout << "uppercase" <<endl;
//   }

//   return 0;
// }

// Ternary statement
// condition ? strr1 : strr2;

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 45;

//   cout << (n >=0 ? "positive" : "negetive") <<endl;
//   return 0;
// }

// Loops:

// for loop: for loop is used when we know the number of iterations, we want to perform.
// while loop: while loop is used when we don't know the number of iterations, we want to perform.
// do while loop: do while loop is used when we want to perform the loop at least once.

// while loop:

// #include <iostream>
// using namespace std;

// int main() {
//   int count = 1;

//   while(count <=5) {
//     cout << count << " ";
//     count++;
//   }

//   cout << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int count = 1;

//   while(count <= n) {
//     cout << count << " ";
//     count++;
//   }

//   cout << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int i = 1;

//   while(i <= n) {
//     cout << i << " ";
//     i++;
//   }

//   cout << endl;
//   return 0;
// }

// for loop:

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 10;

//   for(int i=1; i<=n; i++) {
//   // for(int i=1; i<=n; i = i+2) {
//     cout << i << " ";
//   }

//   cout << endl;
//   return 0;
// }

// QS: Sum of numbers from 1 to n.

// using while loop:

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int sum = 1;

//   while(sum <= n) {
//     cout << sum << " ";
//     sum++;
//   }

//   cout << endl;
//   return 0;
// }

// using if statement with break

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int sum = 0;

//   for(int i=1; i<=n; i++) {
//     sum += i;
//     if(i == 5) {
//       break; //keywords
//     }
//   }

//   cout << "sum= " <<sum << endl;
//   return 0;
// }

// Qs : Sum of all odd numbers from 1 to N

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int oddSum = 0;

//   for(int i=1; i<=n; i++) {
//     if(i%2 != 0){
//         oddSum += i;
//     }
//   }

//   cout << "odd sum = " << oddSum << endl;
//   return 0;
// }

// Qs: Sum of all even numbers from 1 to N

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 50;
//   int i = 1;
//   int oddSum = 0;

//   // print odd numbers
//   while(i<=n) {
//     if(i%2 != 0){
//        oddSum += i;
//     }
//     i++;
//   }

// cout << "odd sum = " << oddSum << endl;
//   return 0;
// }

// Hw: sum of even number within range of 1 to n using while loop

// #include <iostream>
// using namespace std;

// int main() {
//   int n =50;
//   int i = 1;
//   int evenSum = 0;

//   while(i<=n) {
//     if(i%2 == 0) {
//       evenSum += i;
//     }
//       i++;
//     }

//   cout << "even sum = " << evenSum << endl;
//   return 0;
// }

// do while loop

// #include <iostream>
// using namespace std;

// int main() {

//   while(3 > 5) {
//     cout << "hello world" <<endl;
//   }

//   do {
//     cout << "hello world" <<endl;
//   } while(3 > 5);

//   return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main () {
//   int n = 10;
//   int i = 1;
//
//   do {
//     cout << i << " ";
//     i++;
//   } while(i <=n);
//
//   cout << endl;
//   return 0;
// }

// Qs: Check if number is prime or not

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 1;
//   bool isPrime = true;

//   for(int i=2; i<=n; i++) {
//     if(n % i ==0) {
//       isPrime = false;
//       break;
//     }
//   }

//   if(isPrime == true) {
//     cout << "prime no" << endl;
//   } else {
//     cout << "non prime no" << endl;
//   }
//   return 0;
// }

// better way:

// #include <iostream>
// using namespace std;

// int main() {
//    int n = 1;
//   bool isPrime = true;

//   for(int i=2; i*i <= n; i++) {
//     if(n % i ==0) {
//       isPrime = false;
//       break;
//     }
//   }

//   if(isPrime == true) {
//     cout << "prime no" << endl;
//   } else {
//     cout << "non prime no" << endl;
//   }
//   return 0;
// }

// Nested loops:
// loop inside loop

// #include <iostream>
// using namespace std;

// int main() {

//   for(int i= 1; i<=5; i++) {
//     cout << "*****" <<endl;
//   }
//   return 0;
// }

//when you want to print starss in only in particular line.
// #include <iostream>
// using namespace std;

// int main() {
//   for(int i=1; i<=5; i++) {
//   int m = 5;
//   for(int j=1; j<=m; i++) {
//     cout << "*" ;
//   }

//   cout << endl;
// }
//   return 0;
// }

// running loop n number of times

// #include <iostream>
// using namespace std;

// int main() {
//   int n = 5;
//   for(int i=1; i<=n; i++) {
//   int m = 5;
//   for(int j=1; j<=m; i++) {
//     cout << "*" ;
//   }

//   cout << endl;
// }
//   return 0;
// }

// hw:

// Qs: Sum of all numbers from 1 to N which are divisible by 3.

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     int sum = 0;

//     cout << "Enter a number N: ";
//     cin >> N;

//     for(int i = 1; i <= N; i++) {
//         if(i % 3 == 0) {
//             sum += i;
//         }
//     }

//     cout << "Sum of numbers from 1 to " << N << " divisible by 3 is: " << sum << endl;
//     return 0;
// }

// Qs: Print Factorial of a number N.

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     unsigned long long factorial = 1;

//     cout << "Enter a number: ";
//     cin >> N;

//     if (N < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         for(int i = 1; i <= N; i++) {
//             factorial *= i;
//         }

//         cout << "Factorial of " << N << " is: " << factorial << endl;
//     }

//     return 0;
// }

// using while loop:

#include <iostream>
using namespace std;

int class_loops() {
    int N;
    unsigned long long factorial = 1;

    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int i = 1;

        while (i <= N) {
            factorial *= i;
            i++;
        }

        cout << "Factorial of " << N << " is: " << factorial << endl;
    }

    return 0;
}