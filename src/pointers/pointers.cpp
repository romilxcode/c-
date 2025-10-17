// Created by romil on 10/17/2025.
// //Pointers: Special variables that store address of other variables

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 10;
//     int *ptr = &a;
//     int **parPtr = &ptr;
//
//     cout << **(parPtr) << endl;
//     // cout << *(ptr) <<endl;
//     // cout << (ptr) << endl;
//     // cout << parPtr << endl;
//     return 0;
// }

//Null Pointer: A pointer that doesn't point to any location.

// #include <iostream>
// using namespace std;
//
// int main() {
//     int **ptr = NULL;
//
//     cout << *ptr << endl;
//     return 0;
// }

//Qs Predict Output:

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 5;
//     int *p = &a;
//     int **q = &p;
//
//     cout << p << endl;
//     cout << *q << endl; //&a
//     cout << &a << endl;
//     return 0;
// }

//Pass by Reference

// #include <iostream>
// using namespace std;
// void changeA (int *ptr) { //pass by val
//     *ptr = 20;
// }
//
// int main() {
//     int a = 10;
//     changeA(&a);
//
//     cout << "inside main fnx : " << a << endl; //20
//     return 0;
// }

//References (alias): A reference in C++ is simply an alias (alternate name) for an existing variable.

// #include <iostream>
// using namespace std;
//
// void changeA(int &b) { // pass by reference using alias
//     b = 20;
// }
//
// int main() {
//     int a = 10;
//     changeA(a);
//
//     cout << "Inside main fnx : " << a << endl; //20
//     return 0;
// }

//Array Pointers:

// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int a = 15, b = 10;
//     int *ptr = &a;
//     ptr = &b;
//     return 0;
// }

//Pointer Arithmetic
//Increment(++) / Decrement (--)

// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//
//     int a = 10;
//     int *ptr = &a;
//
//     cout << ptr << endl;;
//     ptr--;
//     cout << ptr << endl; // +4
//     return 0;
// }

//Add / Subtract Number

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//
//     int a = 10;
//     int *ptr = &a;
//
//     cout << ptr << endl;;
//     ptr = ptr + 2; //2int -> 8B
//     cout << ptr << endl; // +8
//     return 0;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//
//    cout << *arr <<endl; //1
//     cout << *(arr+1) << endl;
//     return 0;
// }

//Subtract ptr
//ptr1 + ptr is not allowed

// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr2;
//     int *ptr1 = ptr2 + 2; //108
//
//     cout << ptr1 - ptr2 << endl; //2
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//
//     int *ptr1;
//     // int *ptr2;
//     int *ptr2 = ptr1;
//     cout << ptr1 << endl;
//     cout << ptr2 << endl;
//
//     // cout << (ptr1 < ptr2) << endl;
//     cout << (ptr1 == ptr2) << endl;
//     return 0;
// }

//Qs. Predict Output

#include <iostream>
#include <vector>
using namespace std;

int run_pointer_demo() {
    int arr[] = {10, 20, 30, 40};
     int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;
    return 0;
}