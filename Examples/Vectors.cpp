#include <iostream>
#include<vector>
using namespace std;
using std::vector;


int main()
{
    vector<int> int1(3);

    cout << "Enter three items for the vector." << endl;

    for (int i = 0; i < int1.size(); i++)
    {
        cin >> int1[i] ;
    }

    cout << "\nValues of Vector1 are:" << endl;
    for (int i = 0; i < int1.size(); i++)
    {
        cout <<int1[i] << " " << endl;
    }

    cout << "\nCopying vector1 into Vector2" << endl;
    vector<int> int2(int1); // copying vector. Declaration and initialization at the same time.


    cout << "\nValues of Vector2 * 2 are:" << endl;
    for (int i = 0; i < int1.size(); i++)
    {
        cout <<int2[i] * 2 << " " << endl;
    }

    int2.at(2) = 9; //changing value of a vector item.

    cout << "\nValues of Vector2 after the change are:" << endl;
    for (int i = 0; i < int1.size(); i++)
    {
        cout <<int2[i]  << " " << endl;
    }

//comparing 2 vectors
    if(int1 == int2)
        cout <<"\nBoth vectors are same.";
    else
        cout <<"\nBoth vectors are NOT same.";

}
