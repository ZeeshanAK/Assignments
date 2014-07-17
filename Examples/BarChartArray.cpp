#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 11;
    int studentGrade[arraySize];

    cout << "Enter the number of students who fall under: " << endl;
    for(int n = 0; n < arraySize; n++)
    {
        if(n == 0)
        {
            cout << " 0 - 9: ";
            cin >> studentGrade[n];
        }

        else if (n == 10)
        {
            cout << "    100: " ;
            cin >> ++studentGrade[n];
        }
        else
        {
            cout << n * 10 << " - " << ( n * 10 )+ 9 << ": ";
            cin >> ++studentGrade[n];
        }
    }


    cout << "\nThe bar chart is shown below:" << endl;
    for(int j = 0; j < arraySize; j++)
    {
        if(j == 0)
            cout << " 0 - 9: ";

        else if(j == 10)
            cout << "    100: " ;

        else
            cout << j * 10 << " - " << ( j * 10 )+ 9 << ": ";

        for (int stars = 0; stars < studentGrade[j]; stars++)
        {
            cout << '*';
        }
        cout << endl;

    }
}
