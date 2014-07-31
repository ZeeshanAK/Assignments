#include<iostream>
using namespace std;

void swap(int *num1, int * num2)
{
    int temp;
    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}


int main()
{
    int nums[10] = {3,6,9,1,4,8,2,5,10,7};

    //displaying array
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << "   ";
    }

    //comparing two elements
    for (int i = 0; i < 10; i++)
    {
       for (int j = 1; j < 10; j++ )
        {
            if( nums[i] > nums[j])
            {
                swap(&nums[i], &nums[j]);
            }
        }
    }


    cout << "\n\nDisplaying sorted array:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << "   ";
    }

}
