#include <iostream>
#include <fstream>
#include "main.h"
// using namespace std;

#define NewL '\n'

int calcval(int val);
int add(int a, int b) {
    
    int c;
    c = a+b;
    return c;

}

int sub(int a, int b) {
    
    int c;
    c = a-b;
    return c;

}

int divide(int a, int b) {
    
    int c;
    c = a/b;
    return c;

}

int mul(int a, int b) {
    
    int c;
    c = a*b;
    return c;

}

int main() {

    std::cout << "[ Collin's Calculator ]" << NewL;

    char o; // operator
    int a;
    int b;
    int c; // result

    std::cout << "> ";
    std::cin >> a;
    std::cout << NewL;

point_a:
    std::cout << "Operator (+, -, *, /)> ";
    std::cin >> o;
    std::cout << NewL;
    
    if(o == '+') {

point_b:
        std::cout << "> ";
        std::cin >> b;

        if(b >= 0) {

            std::cout << NewL;
            c = add(a, b);
            std::cout << "Final result: " << c << NewL;

        } else {

            std::cout << NewL << "Please try again. " << NewL;
            goto point_b;

        }
        

    }

    if(o == '-') {

point_c:
        std::cout << "> ";
        std::cin >> b;

        if(b >= 0) {

            std::cout << NewL;
            c = add(a, b);
            std::cout << "Final result: " << c << NewL;

        } else {

            std::cout << NewL << "Please try again. " << NewL;
            goto point_c;

        }

    }

    if(o == '*') {

point_d:
        std::cout << "> ";
        std::cin >> b;

        if(b >= 0) {

            std::cout << NewL;
            c = mul(a, b);
            std::cout << "Final result: " << c << NewL;

        } else {

            std::cout << NewL << "Please try again. " << NewL;
            goto point_d;

        }

    }

    if(o == '/') {

point_e:
        std::cout << "> ";
        std::cin >> b;

        if(b >= 0) {

            std::cout << NewL;
            c = divide(a, b);
            std::cout << "Final result: " << c << NewL;

        } else {

            std::cout << NewL << "Please try again. " << NewL;
            goto point_e;

        }
        
    }

    // Ending
    std::cout << NewL << "Exiting... " << NewL;
    std::cin.get(); 

}
