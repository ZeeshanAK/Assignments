#include<iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

//Generating two rand numbers from 1 to 6
int rollDice()
{
    srand(time(0));
    int face1 = 1 + rand()%6;
    int face2 = 1 + rand()%6;
    int sum = face1 + face2;

    cout << "Player rolled " << face1 << " + " << face2 << " = " << sum << endl;
    return sum;
}

string gameStatus; //Hold status of game; WIN, CONTINUE, LOST
int sumOfDice = rollDice();
int point = 0; //This will hold sum of dice if it's default case defined below in Switch.

int main()
{
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
