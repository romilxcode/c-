// #include <iostream>
// using namespace std;

// int main() 
// {
//     cout << (int)'a' << endl;
//     cout << int('a') << endl;
//     cout << int('A') <<endl;
//     cout << char(65) <<endl;
// }

#include <iostream>
using namespace std;

int main() 
{
    char c1, c2, c3, c4, c5;
    cout <<"Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5; 
    cout << "ACSII message: " << int(c1) << " " << int(c2)
    << " " << int(c3) << " " << int(c4) << " " << int(c5);
}