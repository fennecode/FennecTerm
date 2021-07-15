// Has no effect on Ultimate Furry Terminal. Experimenting with pointers, planned to be integrated for further organizing.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

/*
    string doggo;
        ifstream dogascii ("doggo.txt");
        if(dogascii.is_open () ) {
            while (! dogascii.eof() ) {
                getline (dogascii,doggo);
                cout << doggo << endl;
            }
        dogascii.close();
    }
*/

    string* txtptr;
    string doggo;
        ifstream dogascii ("doggo.txt");
        if(dogascii.is_open () ) {
            while (! dogascii.eof() ) {
                getline (dogascii,doggo);
                txtptr = &doggo;
            }
        dogascii.close();
    }

}