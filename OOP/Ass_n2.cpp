/*
Assignment # 2
Object Oriented Programming.
Inheritance and Aggregation example in C++
Test line added from Windows explorer via notepad. 
*/

#include <iostream>
using namespace std;

class Transport
{
private:
    int Weight;
    int Capacity;
    int Speed;

public:
    Transport()
    {
        Weight = 0;
        Capacity = 0;
        Speed = 0;
    }
    bool Carray_Goods() {}
};

//Inheritance of Land_Transport from Transport
class Land_Transport : public Transport
{
private:
    char *Transportation_Mode;
    char *Vehicle_Type;
public:
    Land_Transport(char *trnMode, char *vhcType)
    {
        Transportation_Mode = trnMode;
        Vehicle_Type = vhcType;
    }
};

//Inheritance of Air_Transport from Transport
class Air_Transport : public Transport
{
private:
    char *Aircraft_Type;
    char *Aircraft_Name;
public:
    Air_Transport(char *craftType, char *craftName)
    {
        Aircraft_Type = craftType;
        Aircraft_Name = craftName;
    }
};

class Room
{
private:
    int Length;
    int Width;
public:
    Room()
    {
        Length = 0;
        Width = 0;
    }
    void Store() {}
};

class Hall
{
private:
    int Length;
    int Width;
public:
    Hall()
    {
        Length = 0;
        Width = 0;
    }
    void Store() {}
};

class Company
{
private:
    char *Comp_Name;
    char *Registration_No;

    //Aggregating Hall and Room in Company
    Hall *CompanyHall[2];
    Room *CompanyRoom [20];

public:
    Company(char *compName, char *regNo)
    {
        Comp_Name = compName;
        Registration_No = regNo;
    }
    void Profit_Report() {} // This function prints the annual profit of the company.
    void Financial_Statement() {}   //This function prints the annual financial statement of the company.
};


int main()
{
    cout<<"Hello world, I am an example code for Inheritance and Aggregation in C++!";
	//Removed the extra line that was inserted here! 
	
}
