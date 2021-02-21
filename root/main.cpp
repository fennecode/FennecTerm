/* 
My next major project, FennecTerm. Current Version 0.1
Created by (still educationg developer) Collin, aka. "Fennecode".
Notes: Currently a beginning to a command-line interface, may evolve visions down the road. 
[ !! PRIVATE GITHUB REPO, CLOSED SOURCE SOFTWARE !! ]
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define NewL '\n'

int main() {

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

    cout << "=> ";
    cin >> i;
    cout << endl;

    // other interactions to come soon.

}