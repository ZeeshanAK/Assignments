#include<iostream>
using namespace std;

int main()
{
    const int arrSize = 10;
    int intArray[arrSize] = {12,6,44,66,23,87,65,46,33,30};

    cout << "Unsorted array is:" << endl;
    for ( int i = 0; i < arrSize; i++)
    {
        cout << intArray[i] << ", ";
    }


    for (int sec = 1; sec < arrSize; sec++)
    {
        int temp = intArray[sec];
        //int moveItem = sec;

        while ( (sec > 0) && intArray[sec -1] > temp)
        {
            intArray[sec] = intArray[sec-1];
            sec--;
        }
        intArray[sec] = temp;
    }


    cout << "\n\nSorted array is:" << endl;
    for ( int i = 0; i < arrSize; i++)
    {
        cout << intArray[i] << ", ";
    }
}
