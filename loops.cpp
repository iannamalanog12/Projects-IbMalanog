#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define WHILE_LOOP    1
#define DO_WHILE_LOOP 2
#define FOR_LOOP      3
/*
----------------------------------------------------------------
Name: Ib Malanog
Program: loops.cpp

Description: This program will prompt the user to enter a 
positive integer(n) and a prefered loop method. Additionally,
this program will output n, n^3, √n, and √(n^3 - 4) of 1
through n and arrange them in a table.

Goals: Practice for, while, and do-while loops.
---------------------------------------------------------------
*/
int askForNumber() {         // this function determines how long the table will be.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n <= 0) {
        cout << "Enter a number GREATER THAN 0: ";
        cin >> n;
    }
    return n;
}

int askForLoopMethod() {
    int method;
    cout << "Loop Method? " << endl;
    cout << "Enter '"<< WHILE_LOOP << "' for while, '" << DO_WHILE_LOOP;
    cout <<  "' for do-while, or '" << FOR_LOOP << "' for for loop." << endl;
    cin >> method;
    
    return method;
}

void printHeader() {
    cout << " " << endl;
    cout << setw(5) << right << "n";
    cout << setw(15) << fixed << "n^3";
    cout << setw(10) << fixed << "√n";
    cout << setw(20) << fixed << "√(n^3 - 4)" << endl;
    cout << "-----------------------------------------------" << endl;
}

void printAnswer(int i) {
    float underRadical;
    cout << setw(5) << right << i;
    cout << setw(15) << right << setprecision(2) <<  pow(i, 3);
    cout << setw(10) << right << setprecision(2) << sqrt(i);
    underRadical = pow(i,3) - 4;
    cout << setw(10) << right << setprecision(2) << sqrt(abs(underRadical));
    if(underRadical < 0)    //if what's under the radical is negative, the answer is imaginary
        cout << "i";        // lines 56-60  will output the absolute value and attach i.
    cout << endl;           
}

int main() {
    int n, i, method;
    float underRadical;
    
    n = askForNumber();
    method = askForLoopMethod();
    
    printHeader();
    
    i = 1;
    switch(method) {
        case WHILE_LOOP: 
            while (i <= n) 
                printAnswer(i++);
            break;
                
        case DO_WHILE_LOOP: 
            do
                printAnswer(i++);
            while (i <= n);
            break;
            
        case FOR_LOOP: 
            for (i = 1; i <= n; i++) 
                printAnswer(i);
            break;
            
        default: 
            cout << method << " was not one of the choices.";
            break;
        }
    return 0;
}










