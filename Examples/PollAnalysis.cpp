#include<iostream>
using namespace std;

int main()
{
    const int respSize= 10;
    const int freqSize = 6;

    int response[respSize] = {2,2,3,5,2,3,3,5,2,4};
    int frequency[freqSize] = {0};

    for (int i =0; i < respSize; i++)
     frequency[ response[ i ] ]++;

    for (int j = 1; j < freqSize; j++)
    {
        cout << j << "\t" << frequency[j] << endl;
    }

}


