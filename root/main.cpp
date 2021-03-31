/* 
My next major project, FennecTerm. Current Version 0.2.2
Created by (still educationg developer) Collin, aka. "Fennecode".
[ OPEN-SOURCE, FORK AS YOU WISH ]
*/

#include <iostream>
#include <string>
#include <fstream>
#include "includes/calc.cpp"
using namespace std;

#define NewL '\n'


int main() {

    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│    ⚝ FennecTerm ⚝      │" << endl;
    cout << "│        v0.2.2          │" << endl;
    cout << "│         [WIP]          │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    cout << "Open-Source Developed by Collin" << endl;
    cout << "For command usage, please type 'help' and press Enter! " << endl;
    cout << NewL;

    // User Interaction Begins Below

    string temp;


loop:
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

    if(temp == "calc") {

        /* 
        CALCULATOR APPLICATION
        */
       
        cout << NewL << "[ Basic Calculator ]" << endl;

        char calc_o; // operator
        int calc_a;
        int calc_b;
        int calc_c; // result

        cout << "Number >> ";
        cin >> calc_a;
        cout << NewL;

calcpoint_a:
        cout << "Operator (+, -, *, /)" << NewL << ">> ";
        cin >> calc_o;
        cout << NewL;
    
        if(calc_o == '+') {

calcpoint_b:
            cout << "Number >> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = (calc_a, calc_b);
                calc_c = add(calc_a, calc_b);
                cout << "!! Final Result >> " << calc_c << endl;
                cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                goto loop;

            } else {

                std::cout << NewL << "Please try again. " << endl;
                goto calcpoint_b;

            }
        

        }

        if(calc_o == '-') {

calcpoint_c:
            cout << "Number >> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = sub(calc_a, calc_b);
                cout << "!! Final Result >> " << calc_c << endl;
                cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                goto loop;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_c;

            }

        }

        if(calc_o == '*') {

calcpoint_d:
            cout << "Number >> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = multiply(calc_a, calc_b);
                cout << "!! Final Result >> " << calc_c << endl;
                cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                goto loop;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_d;

            }

        }

        if(calc_o == '/') {

calcpoint_e:
            cout << "Number >> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = divide(calc_a, calc_b);
                cout << "!! Final Result >> " << calc_c << endl;
                cout << NewL << "Returning to FennecTerm..." << NewL << endl; 
                goto loop;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_e;

            }
        
        } else if(calc_o == 'x') {

            cout << "Returning to FennecTerm..." << NewL << endl;
            goto loop;

        } else {

            cout << "!!! Please re-enter a valid Operator !!! " << endl;
            cout << "If you'd wish to exit, press 'x' now! " << NewL << endl;
            goto calcpoint_a;
            
        }

    } else {

        cout << NewL;
        goto loop;
        
    }


    // other interactions to come soon.
    cin.get(); 

}