#include<iostream>
using namespace std;


class Test
{
public:
    void setValue(int num)
    {
        x = num;
    }
    void display()
    {
        cout << "Value of  X = " << x << endl;
    }

private:
    int x;
};


int main()
{
    Test objTest; // creating object of Test class
    objTest.setValue(1); //Sending number 1 via objTest to setValue via '.' operator
    objTest.display();

    //Access through '->' operator
    Test *testPointer = &objTest; //testPointer must be pointing to class's object i.e. objTest
    testPointer -> setValue(2); //Sending number 2 via testPointer to setValue via '->' operator
    testPointer -> display();

    //Access through '&' operator
    Test &testReference = objTest; // testReference must have the address of class's object i.e. objTest
    testReference.setValue(3); //Sending number 3 via testReference to setValue via '.' operator
    testReference.display();
}
