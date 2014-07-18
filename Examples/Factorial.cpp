/*
This program calculates the factorial of a given number.
*/

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the number to check its Factorial:" <<endl;
    int number;
    cin >> number;

    int factorial = 1;
    for (int i = number; i >= 1; i--){
        factorial *= i;
    }

    cout << "Factorial of the number " << number << " is " <<factorial;
}
