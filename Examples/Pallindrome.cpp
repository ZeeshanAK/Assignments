
#include<iostream>
using namespace std;

int main()
{
    char a[10] = {0};
    char b[10] = {0};

    cout<<"Enter your string\n\n";
    cin>>a;
    cout<<"\nYour string is: " << a ;

    int i = 0;
    for (int k = 9; k >=0; k--)
    {
        if(a[k] != '\0')
        {
            b[i] = a[k];
            i++;
        }
       b[i] = '\0';
    }
    cout<<"\nReverse of string is: " << b ;

    int pal = 1;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] != b[i])
            pal = 0;
    }

    if (pal == 1)
        cout<< "\n\nThe string is a Palindrome!" ;
    else
        cout<< "\n\nThe string is NOT a Palindrome!" ;
}
