//
// Created by romil on 10/17/2025.
//
#include "patterns.h"

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=1; i<=n; i++) { // outer

//         for(int j=1; j<=n; j++){ // inner
//             cout << j << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// printing stars (*):

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++){
//             cout << " *";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// from 0:

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++){
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// Using characters:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) {
//         char ch = 'A';
//         for(int j=0; j<n; j++) {
//             cout << ch;
//             ch = ch + i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// print pattern: 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;

//     int num = 1;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++){
//             cout << num << " ";
//             num++;
//         }

//         cout << endl;
//     }

//     cout << "afte pattern : " << num <<endl; // 10
//     return 0;
// }

// hw: do the same for characters:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;

//     char pattern = 'A';

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++){
//             cout << pattern << " ";
//             pattern++;
//         }

//         cout << endl;
//     }

//     cout << "afte pattern : " << pattern <<endl;
//     return 0;
// }

// Triangle pattern:

// *
// * *
// * * *
// * * * *

// with numbers:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) { // i+1
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// using char:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//      char pattern ;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) { // i+1
//             // cout << (pattern+1) << " ";
//              cout << pattern << " ";
//              pattern++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     char pattern = 'A';

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++) {   // print (i+1) times
//             cout << pattern << " ";
//         }
//         pattern++;  // move to next letter after the row
//         cout << endl;
//     }

//     return 0;
// }

// print the pattern:
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i = 0; i < n; i++) {
//         for(int j = 1; j <= i + 1; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Reverse triangle pattern:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//    for(int i=0; i<n; i++) {
//     for(int j=i+1; j>0; j--) {
//         cout << j << " ";
//     }
//     cout << endl;
//     }

//     return 0;
// }

// Floyd's triangle pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     int num = 1;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

//  using char:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     char ch = 'A';

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// reverse order

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     char ch = 'A' + (n * (n + 1)) / 2 - 1;

//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << ch << " ";
//             ch--;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Inverted triangle pattern:

// 1 1 1 1
//   2 2 2
//     3 3
//       4

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     int num = 1;
//     for(int i=0; i<n; i++) {
//         //spaces
//         for(int j=0; j<i; j++) {
//             cout << " ";
//         }

//         // nums
//         for(int j=0; j<n-i; j++) {
//             cout << (i+1);
//         }
//         cout <<endl;
//     }
//     return 0;
// }

// Using ch:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     char ch = 'A';
//     for(int i = 0; i < n; i++) {
//         // spaces
//         for(int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         for(int j = 0; j < n - i; j++) {
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }

//     return 0;
// }

// Pyramid pattern
//     1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 8;

//     for(int i = 0; i < n; i++) {
//         // spaces
//         for(int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         // increasing numbers
//         for(int j = 1; j <= i + 1; j++) {
//             cout << j;
//         }

//         // decreasing numbers
//         for(int j = i; j >= 1; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// Hollow diamond pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     // Top half
//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << "*";

//         if (i != 0) {
//             // spaces
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " ";
//             }
//             cout << "*";  // Second star
//         }

//         cout << endl;
//     }

//     // Bottom half
//     for (int i = n - 2; i >= 0; i--) {
//         // Print leading spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << "*";

//         if (i != 0) {

//             // spaces
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// Butterfly pattern:

#include <iostream>
using namespace std;

int demo_patterns() {

    int n = 4;
    // upper half
    for(int i=1; i<=n; i++) {
        // stars - left
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        // spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }

        // stars - right
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // lower half
    for(int i=n; i>=1; i--) {
        // stars - left
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        // spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }

        // stars - right
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Print a message.
    cout << "Butterfly pattern completed." << endl;
    return 0;
}