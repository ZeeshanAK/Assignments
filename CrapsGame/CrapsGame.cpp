/*
ISSUE: http://stackoverflow.com/questions/27295655/generating-different-random-number-in-second-call?noredirect=1#comment43056907_27295655
Status: Fixed.
Resolution: Seed rand once, if you do it twice at the same time, it will generate the same number.
Also call the rand() once you've seeded it.
Was calling the rand() before the seed and it kept producing 6 + 6 every time LOL xD
*/

#include<iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

//Generating two rand numbers from 1 to 6
int rollDice()
{
    int face1 = 1 + rand()%6;
    int face2 = 1 + rand()%6;
    int sum = face1 + face2;

    cout << "Player rolled " << face1 << " + " << face2 << " = " << sum << endl;
    return sum;
}


string gameStatus; //Hold status of game; WIN, CONTINUE, LOST

int point = 0; //This will hold sum of dice if it's default case defined below in Switch.

int main()
{
    srand(time(NULL));
    int sumOfDice = rollDice();
     switch(sumOfDice)
     {
         case 7:
		case 11:
			gameStatus = "WIN";
			break;

        case 2:
		case 3:
		case 12:
			gameStatus = "LOST";
			break;

        default:
            gameStatus = "CONTINUE";
            point = sumOfDice;
            cout << "Point is " << point << endl;
     }

     while (gameStatus == "CONTINUE")
     {
         int rollAgain = rollDice();
         if (rollAgain == point)
            gameStatus = "WIN";
         else if (rollAgain == 7)
            gameStatus = "LOST";
     }
     if (gameStatus == "WIN")
        cout << "Player won!";
     if (gameStatus == "LOST")
        cout << "Player lost!";
}


