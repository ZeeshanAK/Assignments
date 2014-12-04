#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{

    srand(time(NULL));

    for (int i =0; i <600; i++)
    {
        int num = 1 + rand()%6;
        cout << num << " " ;
    }
}
