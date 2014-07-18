/*
This program gets the number of students from the user and then as per their score
puts them in the range and at the end shows a bar chart.
*/

#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 11;
    int studentGrade[arraySize];

    //Getting score input from user
    cout << "Enter the number of students who fall under: " << endl;
    for(int n = 0; n < arraySize; n++)
    {
        if(n == 0)  //if the score is Zero put it between 0-9
        {
            cout << " 0 - 9: ";
            cin >> studentGrade[n];
        }

        else if (n == 10)   //if the score is 10 put it in 100
        {
            cout << "    100: " ;
            cin >> ++studentGrade[n];
        }
        else    //otherwise
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
