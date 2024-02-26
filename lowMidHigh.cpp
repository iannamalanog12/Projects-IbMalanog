#include <iostream>
using namespace std;

/*
-----------------------------------------------------------------------------
Name: Ib Malanog
Program: lowMidHigh.cpp

Description: This program will prompt the user to enter 3 different
numbers and identify which is the maximum, minimum, and middle number using 
a nested if statement.
-----------------------------------------------------------------------------
Possible combinations for 3 numbers:

#   a       b       c
-----------------------
1.  min     mid     max
2.  min     max     mid
3.  mid     min     max
4.  mid     max     min
5.  max     min     mid
6.  max     mid     min
*/

int main() {
    int a, b, c, max, min, middle;
        
    while(1) {
       cout << "Enter a value for a: ";
        cin >> a;
        cout << "Enter a value for b: ";
        cin >> b;
        cout << "Enter a value for c: ";
        cin >> c;
        if (a == b || a == c) {
            cout << " " << endl;
            cout << "Please make sure you enter 3 different numbers. " << endl;
            cout << "Enter a value for a: ";
            cin >> a;
            cout << "Enter a value for b: ";
            cin >> b;
            cout << "Enter a value for c: ";
            cin >> c;
        
        }
    
    if (a < b) {                //if true, its either combo 1,2,4
        if (b < c) {            // checks if it's combo 1
            max = c;
            middle = b;
            min = a;
        } else {                //if not it checks for combo 2 and 4
            if (a < c) {        // if true it's combo 2
                max = b;
                middle = c;
                min = a;
            } else {            //if not it's combo 4
                max = b;
                middle = a;
                min = c;
            }
            
        }
    } else {
        if (b < c) {            //if true it will check for either 3 or 5
            if (a < c) {        //if true it's combo 3
                max = c;
                middle = a;
                min = b;
            } else {            // otherwise it's combo 5
                max = a;
                middle = c;
                min = b;
            }
        } else {                //if this is true it's combo 6
            max = a;
            middle = b;
            min = c;
        }
    }
    
    cout << " " << endl;
    cout << "Max number: " << max << endl;
    cout << "Middle number: " << middle << endl;
    cout << "Min number: " << min << endl;
    }    
    return 0;

}
