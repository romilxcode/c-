// Write out all the numbers between 100-500 that are divisible by 3 and 5

# include <iostream>
using namespace std;

int main()
{
    int counter = 100;
    // while (counter < 501) 
    while (counter <= 500) //another way to write
    {
        if(counter % 3 ==0 && counter % 5 == 0)
            cout << counter << "is divisible \n";
        counter++;
    }
}