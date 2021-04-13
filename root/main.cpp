/* 
My next major project, FennecTerm. Current Version 0.2.2
Created by (still educationg developer) Collin, aka. "Fennecode".
[ OPEN-SOURCE, FORK AS YOU WISH ]
*/
#include <iostream>
#include <string>
#include <fstream>
#include "includes/calc.h"
using namespace std;

#define NewL '\n'


void call_help(string help) {

    string temp;

    if(temp == "help") {

        string line;
        ifstream title ("help.txt");

        if(title.is_open () ) {

            while (! title.eof() ) {

                getline (title,line);
                cout << line << endl;

            }

            title.close();

        } else {

            cout << "Was unable to print title. Continuing... " << endl;

        }
        
    }
    
}


int main() {

    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│    ⚝ FennecTerm ⚝      │" << endl;
    cout << "│        v0.3-a          │" << endl;
    cout << "│         [WIP]          │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    cout << "Open-Source Developed by Collin" << endl;
    cout << "For command usage, please type 'help' and press Enter! " << endl;
    cout << NewL;


    // User Interaction Begins Below
    string temp;

start:
    cout << "FennecTerm >> ";
    cin >> temp;


    if(temp == "help") {

        string line;
        ifstream title ("help.txt");

        if(title.is_open () ) {

            while (! title.eof() ) {

                getline (title,line);
                cout << line << endl;

            }

            title.close();

        } else {

            cout << "Was unable to print title. Continuing... " << endl;

        }
        
    }


    while(temp == "calc") {

        // CALCULATOR EXTENSION
       
        cout << NewL << "[ Basic Calculator ]" << endl;

        char calc_o; // operator
        int calc_a;
        int calc_b;
        int calc_c; // result
        
        cout << "Number >> ";
        cin >> calc_a;
        cout << NewL;

        while(cin.good()) {

            cout << "Operator (+, -, *, /)" << NewL << ">> ";
            cin >> calc_o;
            cout << NewL;

            if(calc_o == '+') {

                cout << "Number >> ";
                cin >> calc_b;

                if(cin.fail()) {

                    std::cout << NewL << "Please try again. " << endl;
                    
                } else {

                    cout << NewL;
                    calc_c = (calc_a, calc_b);
                    calc_c = add(calc_a, calc_b);
                    cout << "!! Final Added Result >> " << calc_c << endl;
                    cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                    goto start;
                    
                }

            } else {

                // LEAVE THIS VOID

            }

            if(calc_o == '-') {

                cout << "Number >> ";
                cin >> calc_b; 
                /*

                Program glitches out (starting here ^^) as I enter a char value for an int value, 
                but I'm trying to add value verification in case a user were to input the wrong thing -- typo -- than intended.

                Control Structures (loops) don't seem to be doing the trick, so how do I resolve the issue so the program has proper error check?
                
                */

                if(cin.good()) {

                    cout << NewL;
                    calc_c = (calc_a, calc_b);
                    calc_c = sub(calc_a, calc_b);
                    cout << "!! Final Subtracted Result >> " << calc_c << endl;
                    cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                    goto start;

                } else if(cin.fail()) {

                    std::cout << NewL << "Please try again. " << endl;
                    break;
                    
                } else {

                    std::cout << NewL << "Please try again. " << endl;
                    break;
                    
                }

            } else {

                // LEAVE THIS VOID
                
            }

            if(calc_o == '*') {

                cout << "Number >> ";
                cin >> calc_b;

                if(cin.fail()) {

                    std::cout << NewL << "Please try again. " << endl;
                    
                } else {

                    cout << NewL;
                    calc_c = (calc_a, calc_b);
                    calc_c = multiply(calc_a, calc_b);
                    cout << "!! Final Multiplied Result >> " << calc_c << endl;
                    cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                    goto start;
                    
                }

            } else {

                // LEAVE THIS VOID

            }

            if(calc_o == '/') {

                cout << "Number >> ";
                cin >> calc_b;

                if(cin.fail()) {

                    std::cout << NewL << "Please try again. " << endl;
                    
                } else {

                    cout << NewL;
                    calc_c = (calc_a, calc_b);
                    calc_c = divide(calc_a, calc_b);
                    cout << "!! Final Divided Result >> " << calc_c << endl;
                    cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                    goto start;
                    
                }

            } else {

                // LEAVE THIS VOID

            }
            
        }
        
    }


    // other interactions to come soon.
    cin.get(); 
    
}