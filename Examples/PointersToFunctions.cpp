#include<iostream>
using namespace std;

void fun0()
{
    cout << "User input was 0 so fun0 was called.\n\n";
}
void fun1()
{
    cout << "User input was 1 so fun1 was called.\n\n";
}
void fun2()
{
    cout << "User input was 2 so fun2 was called.\n\n";
}


int main()
{
    //Declaring array of three pointers.
    //void is the return type for those 3 functions and () means no parameters.
    void (*funArray[3])()= {fun0, fun1, fun2};

    cout << "Enter a number between 0 and 2 to call the function, 3 to quit: " ;
    int choice; //To hold user input
    cin >> choice;

    while (choice >= 0 && choice <= 2 )
    {
        (*funArray[choice])();  // call to appropriate fun. goes from here

        cout << "Enter a number between 0 and 2 to call the function, 3 to quit: " ;
        cin >> choice;
    }

    cout << "Program execution completed." << endl;

    return 0;
}
