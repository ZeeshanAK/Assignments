#include<iostream>
using namespace std;

//call by Reference
void callByRef(int &x)
{
    x *= x;
}

//call by value
int callByValue(int y)
{
    return y * y;
}

//call by pointer
void callByPointer (int *nPtr)
{
    *nPtr *= *nPtr;
}

int main()
{
    int x = 5;
    //int y = 10;

    cout << "Value of x = " << x  << endl;
    callByRef(x) ;
    cout << "Value of x after callByRef = " << x <<endl;
    cout << "NEW Value of x = " << x << endl;

    cout << "\n\nValue of x after callByValue = " << callByValue(x) << endl;
    cout << "NEW Value of x = " << x << endl;

    callByPointer(&x) ;
    cout << "\n\nValue of x after callByPointer = " << x << endl;
    cout << "NEW Value of x = " << x << endl;
}
