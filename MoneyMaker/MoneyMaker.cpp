// MoneyMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void clrScr() { 
    for (int i = 0; i < 30; i++) { cout << "" << endl; }
}

void helpMessages() {
    clrScr();
    cout << "Welcome to the Help Menu" << endl;
    int command, forever;
    forever = 1;
    while (forever == 1) {

        cout << "\n\n\nEnter what you want help with:\n1: All Commands\n2: Getting Started\n3: Saving/Loading\n4: Exit" << endl;
        cin >> command;

        switch (command) {
        case 1:
            cout << "Commands: \n!save\n!exit\n!jobs" << endl;
            break;
        case 2:
            cout << "To start, Get a job." << endl;
            break;
        case 3:
            cout << "SAEW" << endl;
            break;
        case 4:
            forever = 0;
            break;
        default:
            cout << "noooo" << endl;
            break;

        }
    }
}

int main() {
 

    cout << "Welcome to the MONEY MAKER!" << endl;
    cout << "This game is about, well, making money!" << endl;
    cout << "This is a command oriented game. Enter !start to begin, or !exit to exit." << endl;
    cout << "Make your choice:" << endl;
    // declare variables
    string command, yesorno, saveFileDump;

    int forever, money, moneyPerTurn, buffs; 
    bool allowSave = false;
    // make sure forever is zero
    forever = 0;   
    cin >> command;
    clrScr();
    if (command == "!start") {
        //start main game loop
        fstream saveFile; 
        // fstream allows for both read and write operations
        saveFile.open("savefile.txt");
        // open file
        saveFile.seekg(0, ios::beg);
        // seek to beginning
        getline(saveFile, saveFileDump);
        // get the line and save it into memory
        if (saveFileDump == "sff" /*sff = save file found*/) {
            getline(saveFile, saveFileDump);
            cout << "A savefile was found under the name: " << saveFileDump << ". Do you want to load it ? yes / no" << endl;
            cin >> yesorno;
            clrScr();
            if (yesorno == "yes" || yesorno == "Yes") {
                allowSave = true;
            }else if (yesorno == "no" || yesorno == "No") {
                while (forever == 0) {
                    cout << "Enter a command or enter !help for help.   ";
                    cin >> command;
                    clrScr();
                    if (command == "!help") {
                        helpMessages();
                    } else if (command == "!exit") {
                        cout << "\n\n\n\n\n EXITING!";
                        return 0;
                    } else if (command == "!jobs") {
                        cout << "Looking for a job!" << endl;
                        
                    }



                }
            } else {
                cout << "Unrecognized output, treating as no." << endl;
                return 0;
            }
        }
    }
} 
    
