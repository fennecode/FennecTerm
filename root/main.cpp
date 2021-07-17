/*
    The Ultimate Furry Terminal | Current Version 0.4.3_2
    Not final software/Alpha stages | Open-Source
    Created by Aspen, aka. "Halogem".
*/
#include <iostream>
#include <string>
#include <fstream>
#include "includes/calc/calc_alg.h"
// #include "txt/load_txt.h"
using namespace std;
#define NewL '\n' // To simplify making new lines between multiple 'cout' phrases rather than using '\n' so many times.

int main() {

    // Moving doggo ASCII art to new location.

    cout << NewL;
    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│   ⚝ The Ultimate ⚝     │" << endl;
    cout << "│  ⚝ Furry Terminal ⚝    │" << endl;
    cout << "│        v0.4.3          │" << endl;
    cout << "│         [WIP]          │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    cout << "Open-Source Developed by Aspen, aka. Halogem!" << endl;
    cout << "For command usage, please type 'help' and press Enter! " << endl;
    cout << "NOTE: If you enter improper values in application calc, you may break this application. Will be fixed down the line." << endl;
    cout << NewL;

    // USER INTERACTION BEGINS BELOW
    string temp;
    while(1 == 1) {
// interaction_beginning:
        cout << ">> ";
        cin >> temp;

        // Temporary
        if(temp == "help") {
            cout << "Updating Help Menu..." << endl;

        }

        /*
        if(temp == "help") {
            string line;
            ifstream title ("txt/help.txt");

            if(title.is_open () ) {
                while (! title.eof() ) {

                    getline (title,line);
                    cout << line << endl;

                }
                title.close();
                // goto interaction_beginning;

            }
        }
        */

        if(temp == "calc") {
            // CALCULATOR EXTENSION       
            cout << "┌────────────────────────┐" << endl;
            cout << "│    Basic Calculator    │" << endl;
            cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;

            char calc_o; // operator
            int calc_a;
            int calc_b;
            int calc_c; // result
            
            cout << "Number" << NewL << ">> ";
            cin >> calc_a;

            while(cin.good()) {
                cout << "Operator (+, -, *, /)" << NewL << ">> ";
                cin >> calc_o;

                while(calc_o == '+') {
                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    if(cin.fail()) {
                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {
                        //  calc_c = (calc_a, calc_b);
                        calc_c = add(calc_a, calc_b);
                        cout << "Final Added Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        // goto interaction_beginning;
                    
                    }
                }
                if(calc_o == '-') {
                    cout << "Number" << NewL << ">> ";
                    cin >> calc_b;

                    if(cin.fail()) {
                        std::cout << NewL << "Please try again! " << endl;
                    
                    } else {
                        // calc_c = (calc_a, calc_b);
                        calc_c = sub(calc_a, calc_b);
                        cout << "Final Subtracted Result" << NewL << "== " << calc_c << endl;
                        cout << "[!] Returning to The Ultimate Furry Terminal..." << NewL << endl; 
                        // goto interaction_beginning;
                    
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
                        // goto interaction_beginning;
                    
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
                        // goto interaction_beginning;
                    
                    }
                }
            }
        }
    }

    // other interactions to come soon.
    cin.get(); 

}
