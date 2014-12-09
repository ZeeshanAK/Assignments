#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

void selectLevel();
void generateSecretNumber(int );
void guessSecretNumber(int);
int secretNumber = 0;
int guessNumber = 0;
int main()
{
    srand (time(NULL));
    selectLevel();
    cout << "\n\nSecret number is: " << secretNumber;

}

void selectLevel()
{
    int choice;
    cout << "Enter 1 for beginner level" << endl;
    cout << "Enter 2 for Intermediate level" << endl;
    cout << "Enter 3 for advance level" << endl;
    cin >> choice;

    do
    {
        if (choice == 1)
        {
            generateSecretNumber(1);
            break;
        }
        else if (choice == 2)
        {
           generateSecretNumber(2);
            break;
        }
        else if (choice == 3)
        {
            cout<< "Entering Advance  level";
            generateSecretNumber(3);
            break;
        }
        else  cout <<"Your choice is incorrect. Please enter again" << endl;
        cout <<"\nChoice: ";
        cin >> choice;
    }
    while(choice != 1 ||choice != 2|| choice!= 3 );
}

void generateSecretNumber(int level)
{
    if (level == 1)
    {
        cout<<"Please guess the secret number in the range [1 - 20]: ";
        secretNumber = 1 + rand()%20 ;
        guessSecretNumber(3);
    }

    if (level == 2)
    {
         cout<<"Please guess the secret number in the range [1 - 50]: ";
        secretNumber = 1 + rand()%50 ;
        guessSecretNumber(4);
    }

    if (level == 3)
    {
         cout<<"Please guess the secret number in the range [1 - 100]: ";
        secretNumber = 1 + rand()%100 ;
        guessSecretNumber(5);
    }
}

void guessSecretNumber(int tries)
{
int i = 1;

    while ( i <= tries)
    {
        cin >> guessNumber;


        if ( (guessNumber > secretNumber) && (i != tries) )
        {
            cout << "your entered number is high, please try again: ";
        }
        else if  ((guessNumber < secretNumber) && (i != tries) )
        {
            cout << "your entered number is low, please try again: ";
        }
        else if  (guessNumber == secretNumber)
        {
            cout<<"Congratulations!...You won!"<<endl;
            break;
        }

        i++;
    }
}

