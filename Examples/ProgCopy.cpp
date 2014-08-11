#include<iostream>
#include<fstream>
#include <cstdlib>

using namespace std;


void writeFile (char line[], int arrSize)
{

    char copyString[200] = {0};

    int i = 0;
    for (int k = 3; k < 200; k++)
    {
        copyString[i++] = line[k];
        //copyString[k] = '\0';
    }

    ofstream outFile;
    outFile.open("Output.txt", ios::app);

    if(!outFile)
    {
        cout << "The output file cannot be opened or is not available!";
        exit (1);
    }
        outFile  << copyString;

        outFile << endl;
 }


int main()
{
    //char  name  ;
    char store[200];

    ifstream openFile;
    openFile.open("Prog.txt");

    if(!openFile)
    {
        cout << "The file cannot be opened or is not available!";
        return 1;
    }

    while (!openFile.eof())
    {
        openFile.getline(store, 200);
        writeFile(store, 200);
    }
    openFile.close();
    cout<< "Done! Check your output file.";
}
