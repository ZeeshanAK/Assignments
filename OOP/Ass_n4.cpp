/*
This is a rough draft, copied from the group and made few changes.
*/

#include<iostream>
#include<string>
using namespace std;
class Transport
{

private:
    float Weight,Speed;
    string Capacity;
public:
    void Load()
    {
        cout<<"\nGoods are loaded successfully\n";
    }
    void Unload()
    {
        cout<<"Goods are Unloaded successfully\n";
    }
    //virtual void Ship() {} OR
    virtual void Ship()=0;
};
class Land_Transport :public Transport
{

private:
    string Transportation_Mode;
    string Vehicle_Type;
public:
    void Ship()
    {
        cout<<"In land transport, shipping is done via Truck";
    }
};
class Air_Transport :public Transport
{
private:
    string Aircraft_Type;
    string Airline_Name;
public:
    void Ship()
    {
        cout<<"\nIn air transport, shipping is done via air cargo\n\n";
    }
};

void Menu();
int main(int argc, char *argv[])
{
    char choice;
    do

    {
        cout<<"\n\nDo you want to transport your goods? <Press Y for YES, & N for NO>\n\n";
        cout<<"*************************************\n\n";
        //choice = getch();
        cin >> choice;
        if(choice == 'y' || choice == 'Y')
        {
            Menu();
        }
        cout<<"\nThank You for using this Program...";
    } while(choice == 'y' || choice == 'Y');
}
void Menu()
{
    Transport *ptr=NULL;
    char tpt;
    cout<<"Press 'L' or 'l' to use Land Transport Service\n\n";
    cout<<"Press 'A' or 'a' to use Air Transport Service\n";
    cout<<"*************************************\n";
    //tpt = getche();
    cin >> tpt;
    if(tpt == 'A' or tpt == 'a')

    {
        ptr=new Air_Transport();
        ptr->Ship();
    }
    if(tpt == 'L' or tpt == 'l')
    {
        ptr=new Land_Transport();
        ptr->Ship();
    }
//    getch();
}
