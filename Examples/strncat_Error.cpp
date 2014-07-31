/*While playing with strncat function from the standard library I noticed this weird behavior
of the function, or maybe may be I did not understand the function well.
But the character array x can only hold 6 characters i.e. Hello and the '\0' but after the
strncat() function is called it adds 8 more chars to it without changing it's size.
I don't understand this, how is this possible?
*/

#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char x[6] = "Hello";
    char y[9] = "Worldcup";

    cout << "X = " << x << endl;
    cout << "strnlength of x = " << strlen(x) << endl;


    cout << "Y = " << y << endl;
    cout << "strnlength of Y = " << strlen(y) << endl;


    strncat(x,y,8);
    cout << "\n\n\nAfter strncat... " ;
    cout << "X = " << x << endl;
    cout << "strnlength of x = " << strlen(x) << endl;


    cout << "Y = " << y << endl;
    cout << "strnlength of Y = " << strlen(y) << endl;

}

