// This program converts a string to UPPER or lower case as per user input.

#include <iostream>
using namespace std;


int main()
{

    string text = "ThIs iS a SaMPlE tExT";
    cout << "Text = " << text << endl <<endl;;
    cout << "Press 1 to convert text to CAPITAL letters and 2 for small letters." << endl;
    int choice;     //To hold user input.
    cin >> choice;

    switch(choice)
    {
    case 1: // if user inputs 1 convert it to UPPER CASE.

        for (int i = 0; i <= text.length(); i++)
        {
            if( islower(text[i]) )
                text[i] = toupper( text[i] );
        }
        cout << "\nConverted text = " << text << endl;
        break;


    case 2: // if user inputs 2 convert it to lower case.


        for (int i = 0; i <= text.length(); i++)
        {
            if( isupper(text[i]) )
                text[i] = tolower( text[i] );
        }
        cout << "\nConverted text = " << text << endl;
        break;

    default:
        cout << "\nPlease enter 1 or 2. Thanks!" << endl;
    }
}
