#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

void selectLevel();
void generateSecretNumber(int );
void guessSecretNumber();
int secretNumber = 0;
int guessNumber = 0;
int main()
{
    srand (time(NULL));
    selectLevel();
    cout << "Secret number is: " << secretNumber;

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
            cout<< "Entering beginner level";
            generateSecretNumber(1);
            break;
        }

        else if (choice == 2)
        {
            cout<< "Entering intermediate   level";
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
        cout <<"Choice: ";
        cin >> choice;
    }
    while(choice != 1 ||choice != 2|| choice!= 3 );
}

void generateSecretNumber(int );void generateSecretNumber(int );
void generateSecretNumber(int level)
{

    if (level == 1)
    {
        cout<< "\n INSIDE beginner level";
        secretNumber = 1 + rand()%20 ;
    }

    if (level == 2)
    {
        secretNumber = 1 + rand()%50 ;
    }

    if (level == 3)
    {
        secretNumber = 1 + rand()%100 ;
    }

}
