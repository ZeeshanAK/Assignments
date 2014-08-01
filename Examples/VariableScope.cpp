//This program shows how to access variables from different scopes.

#include<iostream>
using namespace std;

int x = 4;

class test
{
public:
    void dispVar()
    {
        int x = 5;
        cout << "Value of Global X = " << ::x << endl;
        cout << "Value of function's X = " << x << endl;
        cout << "Value of Class's X = " << test::x;

        // Check how do I access main's variable in a class function.
        cout << "Value of Class's X = " << main()::x;
    }

private:
    int x = 6;

};


int main()
{
    int x = 3;
    test testx;
    testx.dispVar();
}
