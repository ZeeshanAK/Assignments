#include<iostream>
using namespace std;

int main()
{
    const int freqSize= 5;
    const int freq = 10;

    int response[freq] = {2,2,3,5,2,2,3,5,2,6};
    int frequency[freqSize] = {0};

    for (int i =0; i < freq; i++)
     frequency[response[i]]++;

    for (int j = 1; j <= freq; j++)
    {
        cout << j << "\t" << frequency[j] << endl;
    }

}

//Fix this, this is not correct.
