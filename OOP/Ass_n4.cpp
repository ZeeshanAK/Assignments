/*
Assignment #:  4
*/


#include <iostream>
using namespace std;

//Base Transport class starts here
class Transport
{
    //private members of the Transport class
    private:
            float Weight, Speed;
            string Capacity;

    //public member functions of the Transport class
    public:
             void load()
            {
                cout << "Goods are loaded successfully." << endl;
            }

            void unLoad()
            {
                cout << "Goods are unloaded successfully." << endl;
            }

            virtual void ship() = 0 ; //Virtual function to help us with polymorphism
}; //Base Transport class ends here



//Inheriting Land_Transport from Transport
class Land_Transport : public Transport
{
    //private members of the Land_Transport class
    private:
            string Transportation_Mode;
            string Vehicle_Type;

    //public member function of the Land_Transport class
    public:
            virtual void ship()
            {
                cout << "\nIn land transport shipping is done via truck." << endl;
            }
}; //Land_Transport ends here


//Inheriting Air_Transport from Transport
class Air_Transport : public Transport
{

    //private members of the Land_Transport class
    private:
            string Aircraft_Type;
            string Airline_Name;


    //public member function of the Land_Transport class
    public:

            virtual void ship()
            {
                cout << "\nIn air transport shipping is done via air cargo." << endl;
            }
}; //Air_Transport ends here



//main() function get user input and create objects
int main()
{
    char choice;    //This will hold a Y/N if the user want to continue of not?

    cout<< "\nDo you want to transport your goods? Press Y for yes & Press N for No ";
    cin>> choice;   //Get choice from the user.

    while (choice == 'y' || choice == 'Y' )     //While loop to repeat if the user wants to continue.
    {
        if (choice == 'y' || choice == 'Y')
        {
            char answer;    // This will hold the value if the user want to go to Land or Air Transport.

            cout<<"*********************************************** \n";
            cout<< "Press 'L' or 'l' to use Land Transport service \n"
                << "\nPress 'A' or 'a' to use Air Transport service \n"
                <<"*********************************************** \n";

            cin >> answer;

            Transport *transPtr = NULL;

            //If the user enter 'L' or 'l'; create new pointer for Land_Transport and assign it to transPtr
            if (answer == 'L' || answer == 'l' )
            {
                transPtr = new Land_Transport;
            }

            //If the user enter 'A' or 'a'; create new pointer for Air_Transport and assign it to transPtr
            if (answer == 'A' || answer == 'a' )
            {
                transPtr = new Air_Transport;
            }

            //If transPtr is not NULL appropriate ship() function will be called.
            if ( transPtr != NULL)
            {
                transPtr -> ship();
                delete transPtr;
                cout<< "\nDo you want to transport your goods? Press Y for yes & Press N for No ";
                cin>> choice;
            }
        }
    }   //End of while loop


    cout<<"\nThank You for using this Program...\n";

    return 0;  //Terminate program successfully.

}
