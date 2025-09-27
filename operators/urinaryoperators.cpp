// Urinary Operators:
// ++, -- 

#include <iostream>
using namespace std;
int main () 
{
    cout << 5+2 << endl;
    cout << 5-2 << endl;
    cout << 5*2 << endl;
    cout << 5.0 / 2.0 << endl; 
    cout << 5 % 2 << endl;


    int counter = 7;
    counter++;
    cout << counter <<endl;
    counter--;
    cout << counter <<endl;

    int counter2 = 7;
    cout << counter2++ <<endl;
    cout << counter2-- <<endl;
    cout << counter2 << endl;
    // counter2++ is post increment
    // ++counter is pre increment 
}