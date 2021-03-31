/* 
My next major project, FennecTerm. Current Version 0.2
Created by (still educationg developer) Collin, aka. "Fennecode".
Notes: Currently a beginning to a command-line interface, may evolve visions down the road. 
[ FORK AS YOU WISH ]
*/

#include <iostream>
#include <string>
#include <fstream>
#include "includes/calc.h"
using namespace std;

#define NewL '\n'


int main() {

    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│    ⚝ FennecTerm ⚝      │" << endl;
    cout << "│     v0.2.1-a [wip]     │" << endl;
    cout << "│      NEEDS REPAIR      │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    cout << "Developed by Collin J. Reeves" << endl;
    cout << NewL;

    // User Interaction Begins Below

    string temp;


loop:
    cout << "=> ";
    cin >> temp;

    if(temp == "calc") {

        /* 
        CALCULATOR APPLICATION
        */
       
        cout << NewL << "[ Basic Calculator ]" << endl;

        char calc_o; // operator
        int calc_a;
        int calc_b;
        int calc_c; // result

        cout << "> ";
        cin >> calc_a;
        cout << NewL;

calcpoint_a:
        cout << "Operator (+, -, *, /)> ";
        cin >> calc_o;
        cout << NewL;
    
        if(calc_o == '+') {

calcpoint_b:
            cout << "> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = (calc_a, calc_b);
                cout << "Final result: " << calc_c << endl;

            } else {

                std::cout << NewL << "Please try again. " << endl;
                goto calcpoint_b;

            }
        

        }

        if(calc_o == '-') {

calcpoint_c:
            cout << "> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = sub(calc_a, calc_b);
                cout << "Final result: " << calc_c << endl;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_c;

            }

        }

        if(calc_o == '*') {

calcpoint_d:
            cout << "> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = multiply(calc_a, calc_b);
                cout << "Final result: " << calc_c << endl;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_d;

            }

        }

        if(calc_o == '/') {

calcpoint_e:
            cout << "> ";
            cin >> calc_b;

            if(calc_b >= 0) {

                cout << NewL;
                calc_c = divide(calc_a, calc_b);
                cout << "Final result: " << calc_c << endl;

            } else {

                cout << NewL << "Please try again. " << endl;
                goto calcpoint_e;

            }
        
        } else {

            cout << NewL << "Please enter a valid Operator! " << endl;
            goto calcpoint_a;

        }

    } else {

        cout << NewL;
        goto loop;
        
    }

    // other interactions to come soon.


    cin.get(); 

}