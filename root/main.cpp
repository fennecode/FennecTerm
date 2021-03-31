/* 
My next major project, FennecTerm. Current Version 0.2
Created by (still educationg developer) Collin, aka. "Fennecode".
Notes: Currently a beginning to a command-line interface, may evolve visions down the road. 
[ FORK AS YOU WISH ]
*/

#include <iostream>
#include <string>
#include <fstream>
#include "main.h"
using namespace std;

#define NewL '\n'

int calcval(int val);

int main() {

    cout << "┌────────────────────────┐" << endl;
    cout << "│                        │" << endl;
    cout << "│    ⚝ FennecTerm ⚝      │" << endl;
    cout << "│      v0.2.1 [wip]        │" << endl;
    cout << "│                        │" << endl;
    cout << "┕━━━━━━━━━━━━━━━━━━━━━━━━┙" << endl;
    cout << "Developed by Collin J. Reeves" << endl;
    cout << NewL;

    // User Interaction Begins Below

    string temp;

loop:
    cout << "=> ";
    cin >> temp;
    /*
    if(temp != NULL) {

        // Jumps to user specified application (needs work)

    } if-else() {

        // .cpp (Application) Extension Verification
        
    } else {

        goto loop;
        
    }
    */

    // other interactions to come soon.


    cin.get(); 

}