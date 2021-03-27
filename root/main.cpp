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

    // Calling for Title
    string line;
    ifstream title ("title.txt");
    if(title.is_open () ) {

        while (! title.eof() ) {

            getline (title,line);
            cout << line << endl;

        }
        
        title.close();
        
    } else {

        cout << "Was unable to print title. Continuing... " << endl;

    }
    string i;


    // User Interaction Begins Below

    string temp;

loop:
    cout << "=> ";
    cin >> temp;
    if(temp != NULL) {

        // Jumps to user specified application (needs work)

    } if-else() {

        // .cpp (Application) Extension Verification
        
    } else {

        goto loop;
        
    }

    // other interactions to come soon.


    cin.get(); 

}