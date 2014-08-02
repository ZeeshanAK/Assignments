#include<iostream>
#include<iomanip> //for setfill and setw
using namespace std;



int main()
{
    int x =5;
    cout << "Simple value of X               = " << x << endl;
    cout << "setfill ('X') << setw( 3 ) -  X = " << setfill ('X') << setw( 3 ) << x << endl;
    cout << "setfill ('0') << setw( 3 ) -  X = " << setfill ('0') << setw( 3 ) << x << endl;
}
