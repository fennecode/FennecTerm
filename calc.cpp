#include "calc.h"
#include <iostream>
#include <string>
using namespace std;

#define NewL '\n'

int addition(int a, int b) {

    int c;
    c = a+b;
    return (c);

}

int main() {

    cout << "[Basic Addition Calculator]" << endl;

    int a, b, c;

    cout << "=> ";
    cin >> a;
    cout << endl;

    cout << "=> ";
    cin >> b;
    cout << endl;

    c = addition(a, b);
    cout << "== " << c;
    cout << endl;
    
}