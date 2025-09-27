// #include <iostream> 
// using namespace std;

// int main() 
// {
//     int a = 20;
//     int b = 10; 
    
//     int temp = a;
//     a = b;
//     b = temp;

//     cout << "a = " << a << ", b = " << b << endl;
// }

// How to swap value without third variable

#include <iostream>
using namespace std;

void main() 
{
    int a = 20;
    int b = 10;

    a = a + b; // 30
    a = a - b; // 20
    a = a - b; // 10

    cout << "a = " << a << endl;
    cout << "b = " << b <<endl;
}