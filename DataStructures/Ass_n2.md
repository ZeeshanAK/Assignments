### Objective:

The objective of this assignment is to make you familiar with array, link list, stack and queue data structures and programming techniques related to them. 

### Description:

You got an internship in a game developing company. They gave you first task of developing a mini dice rolling game using data structures and C++ as programming language. Your game should meet the following requirements. 

### Requirements:

* Game should be build with the help of stack, link list, array and queue data structures. 
* Game will prompt user to enter the number of players in game.
* Input the name of player and take 5 turns by rolling dice. Outcome of dice should be added into total scores of player.
* Save each player’s record into stack.
* Stack should be implemented using link list. 
* Finally pop all player name and scores from stack and print them as summery. 
* Use queue data structure as dice, having six values from 1-6. Queue should be implemented with the help of array (circular array).  
* To randomly select the value from the queue, we will rotate a loop up to a random value(obtained with the help of built in method rand()


### Solution Guidelines: 

Solution Guidelines: 
1. Before developing this assignment understand and practice following topics (array, link list, stack implementation using link list and queue implementation using circular array).
2. Use stack data structure to save information of players. Each player will represent a node which will contain player name and scores. 
3. Use queue data structure to save dice numbers and get random number from dice. Use circular array to implement queue. 
4. Your solution should use these classes
a.	Player (Node) Class : To save information of each player
b.	Stack Class: To save different players
c.	Queue Class:  To save dice numbers 1-6 and get random number from dice. 
5. Before calling rand() method use this line ( srand(static_cast<int>(time(0))); ) to get different random numbers.
