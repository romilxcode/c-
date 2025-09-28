#include <iostream>
#include <cstdlib> // For system()
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host : ";
    cin >> hostUserNum;
    system("clear"); // Clears the terminal in Linux
    cout << "Guest : ";
    cin >> guestUserNum;

    (hostUserNum == guestUserNum)? cout << "Correct!" : cout << "Failed!";


    // if(hostUserNum == guestUserNum)
    //     cout << "Correct!";
    // else
    //     cout << "Failed!";
}