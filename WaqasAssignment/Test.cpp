#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;


//Function declaration
void selectLevel();
void generateSecretNumber(int );
void guessSecretNumber(int);

//These will hold secret and guess numbers
int secretNumber = 0;
int guessNumber = 0;


int main()
{
    srand (time(NULL)); //  seeding the random number

    //Transferring control to Select Level
    selectLevel();

    cout << "\nSecret number was: " << secretNumber;

}

void selectLevel()
{
    //This will hold user choice which we will define the range for random numbers
    int choice;

    cout << "Enter 1 for beginner level" << endl;
    cout << "Enter 2 for Intermediate level" << endl;
    cout << "Enter 3 for Advance level" << endl;
    cout << "\nChoice: " ;
    cin >> choice;

    //Loop until user inputs a correct choice
    do
    {
        //Calling beginner level
        if (choice == 1)
        {
            generateSecretNumber(1);
            break;
        }

        //Calling Intermediate level
        else if (choice == 2)
        {
           generateSecretNumber(2);
            break;
        }

        //Calling Advance  level
        else if (choice == 3)
        {
            generateSecretNumber(3);
            break;
        }
        else  cout <<"Your choice is incorrect. Please enter again" << endl;
        cout <<"\nChoice: ";
        cin >> choice;
    } while(choice != 1 ||choice != 2|| choice!= 3 );
}


//Function to generate random numbers depending on the level which we get as argument
void generateSecretNumber(int level)
{
    if (level == 1)
    {
        secretNumber = 1 + rand()%20 ;  //Generating numbers from 1-20
        cout<<"Please guess the secret number in the range [1 - 20]: ";
        guessSecretNumber(3);
    }

    if (level == 2)
    {
        secretNumber = 1 + rand()%50 ;  //Generating numbers from 1-50
        cout<<"Please guess the secret number in the range [1 - 50]: ";
        guessSecretNumber(4);
    }

    if (level == 3)
    {
        secretNumber = 1 + rand()%100 ;    //Generating numbers from 1-100
        cout<<"Please guess the secret number in the range [1 - 100]: ";
        guessSecretNumber(5);
    }
}

//This function compares the user input with secret numbers.
//We receive the number of tries as argument
void guessSecretNumber(int tries)
{
    int i = 1; //To be used in loop for number of tries

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

