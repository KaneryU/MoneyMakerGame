// MoneyMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /* So I don't forget.
    fstream saveFile;
    saveFile.open("savefile.txt");
    */
    cout << "Welcome to the MONEY MAKER!" << endl;
    cout << "This game is about, well, making money!" << endl;
    cout << "This is a command oriented game. Enter !start to begin, or !exit to exit." << endl;
    cout << "Make your choice:" << endl;
    // declare variables
    string commands, yesorno;
    int forever, money, moneyPerTurn, buffs;
    forever = 0;
    while (forever == 0) {
        cin >> commands;
        cout << commands << " Is that correct? yes or no" << endl;
        cin >> yesorno;
        if (yesorno == "yes" || yesorno == "Yes") {
            forever = 1;
        } else if(yesorno == "no" || yesorno == "No") {
            cout << "Enter yes or no." << endl;
        } else {
            cout << "Unrecognized output, treating as no." << endl;
        }
        
    }
    forever = 0;
    return 0;
}
