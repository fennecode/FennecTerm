#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string dogart() {

    string doggo;
        ifstream dogascii ("doggo.txt");
        if(dogascii.is_open() ) {
            while (! dogascii.eof() ) {
                getline (dogascii,doggo);
                    return doggo;
                }
            dogascii.close();
        }

}

/*
char dogart() {

    string doggo;
    ifstream dogascii ("doggo.txt");
    if(dogascii.is_open() ) {



    }

}
*/