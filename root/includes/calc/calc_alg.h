#include <iostream>
// #include "calc.cpp"
using namespace std;

// Changes
int add(int x, int y) {

    int a;
    a = x + y;
    return a;

}

int sub(int x, int y) {

    int s;
    s = x - y;
    return s;

}

int divide(int x, int y) {

    int d;
    d = x / y;
    return d;

}

int multiply(int x, int y) {

    int m;
    m = x * y;
    return m;

}

void output_message(std::string message) {

    cout << message << endl;
    
}
