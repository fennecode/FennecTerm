// Experimenting with pointers, planned to be integrated for further code organizing.

#include <iostream>
#include <string>
#include <fstream>
// #include "load_txt.h"
using namespace std;

double txt_load(string doggo) {
    string* txtptr;
        ifstream dogascii ("txt_contents/doggo.txt");
        if(dogascii.is_open () ) {
            while (! dogascii.eof() ) {
                getline (dogascii,doggo);
                txtptr = &doggo;
            }
        dogascii.close();

    }

    // Other Files Access Coming Soon!
    
}

/*
int main() {
    string doggo;
        ifstream dogascii ("doggo.txt");
        if(dogascii.is_open () ) {
            while (! dogascii.eof() ) {
                getline (dogascii,doggo);
                cout << doggo << endl;
            }
        dogascii.close();
    }

}
*/