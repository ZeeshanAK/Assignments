#include <iostream>
using namespace std;

int FunCounter = 0;
void recursiveFun()
{
    FunCounter++;
    if( FunCounter <=5)
    {
        cout << "Recursive call number: " << FunCounter << endl;
        return recursiveFun(); //Here the FucCounter is calling itself.
    }
}

int main()
{
    recursiveFun();
}
