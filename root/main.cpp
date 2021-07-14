/*
    The Ultimate Furry Terminal. Current Version 0.4.2
    Created by (still educationg developer) Aspen, aka. "Halogem".
    [ OPEN-SOURCE, FORK AS YOU WISH ]
*/

// NOT FINAL - Delete this comment after final finishing

#include <iostream>
#include <string>
#include <fstream>

#include "includes/calc/calc_alg.h"
// #include "includes/games/3ps/3ps-engine.h"

using namespace std;
#define NewL '\n'

int main() {

    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│   ⚝ The Ultimate ⚝     │" << endl;
    cout << "│  ⚝ Furry Terminal ⚝    │" << endl;
    cout << "│        v0.4.2          │" << endl;
    cout << "│         [WIP]          │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;

    string doggo;
            ifstream dogascii ("doggo.txt");

            if(dogascii.is_open () ) {

                while (! dogascii.eof() ) {

                    getline (dogascii,doggo);
                    cout << doggo << endl;

                }

                dogascii.close();

            }

    cout << "Open-Source Developed by Aspen, aka. Halogem!" << endl;
    cout << "For command usage, please type 'help' and press Enter! " << endl;
    cout << "NOTE: If you enter improper values in application calc, you may break this application. Will be fixed down the line." << endl;
    cout << NewL;

    /*
	User Interaction
	Begins Below!
    */

    string temp;
    while(1 == 1) {

interaction_beginning:
        cout << ">> ";
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
                goto interaction_beginning;

            }
        
        }

        if (temp == "secrets_uwu") {

            cout << "CLI-based 3rd Person Shooter coming soon!" << NewL << endl;
            
        }

        while(temp == "calc") {

            // CALCULATOR EXTENSION
       
            cout << NewL << "         [ Basic Calculator ]" << endl;

            char calc_o; // operator
            int calc_a;
            int calc_b;
            int calc_c; // result
        
            cout << "Number" << NewL << ">> ";
            cin >> calc_a;

            while(cin.good()) {

                cout << "Operator (+, -, *, /)" << NewL << ">> ";
                cin >> calc_o;

                if(calc_o == '+') {

                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    if(cin.fail()) {

                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {

                        //  calc_c = (calc_a, calc_b);
                        calc_c = add(calc_a, calc_b);
                        cout << "Final Added Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        goto interaction_beginning;
                    
                    }

                }

                if(calc_o == '-') {

                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    /*

                        Need to add error checking for improper data types.
                
                    */

                    if(cin.fail()) {

                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {
                        // calc_c = (calc_a, calc_b);
                        calc_c = sub(calc_a, calc_b);
                        cout << "Final Subtracted Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        goto interaction_beginning;
                    
                    }

                }

                if(calc_o == '*') {

                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    if(cin.fail()) {

                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {

                        // calc_c = (calc_a, calc_b);
                        calc_c = add(calc_a, calc_b);
                        cout << "Final Multiplied Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        goto interaction_beginning;
                    
                    }

                }

                if(calc_o == '/') {

                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    if(cin.fail()) {

                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {

                        // calc_c = (calc_a, calc_b);
                        calc_c = add(calc_a, calc_b);
                        cout << "Final Divided Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        goto interaction_beginning;
                    
                    }

                }

            
            }

        
        }
	
    }


    // other interactions to come soon.
    cin.get(); 


}
