// BMI calculator
// weigh(kg) / height * height(m)
// Underweight < 18.5
// Normal weight 18.5-24.9
// Overweight >25

#include <iostream>
using namespace std;

int main()
{    
    float weight, height, bmi;
    cout << "weight(kg), height(m): ";
    cin >> weight >> height; 
    bmi = weight /(height * height);

    if ( bmi < 18.5)
        cout << "Under weight" << endl;
    else if (bmi > 25)
        cout << "Over weight" << endl;
    else
        cout << "Healthy weight" <<endl;

    cout <<"Your bmi is : " << bmi;
}