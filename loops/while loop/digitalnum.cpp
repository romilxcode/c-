#include <iostream>
using namespace std;

int main()
{
    // Counts digits of a number 
    int number;
    cout << "Number : ";
    cin >> number;

    if(number == 0)
    
        cout << "You have entered 0 \n";
    else {
        if (number < 0)
            number =-1 * number;
        //1325
        //counter = 1
        int counter = 0;
        while(number >0) 
        {
            //number = number / 10; //123
            number /= 10;
            counter ++;
        }
        cout << "Number contains "<<counter<<"digits \n";
    }
}
