#include <iostream>
#include <math.h>

using namespace std;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Name: Ib Malanog
Program: triangles.cpp

Description: This program will ask the user for 3 decimal values.
The program should tell the user if those values could make a 
triangle and if it could be a right triangle.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

int main() {
    float a, b, c, max, side1, side2, x, y;
    
    cout << "Enter the value of side 1: ";
    cin >> a;
    
    cout << "Enter the value of side 2: ";
    cin >> b;
    
    cout << "Enter the value of side 3: ";
    cin >> c;
    
    max=a;
    if (b > max) {
        max = b;
        side1 = a;
        side2 = c;
    } else {
            side1 = b;
    }

     if (c > max) {
        max = c;
        side1 = a;
        side2 = b;
    } else {
        side2 = c;
    }
    
    // This block determines if the numbers can be the sides of a triangle.
    cout << " " << endl;
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        cout << "It is a triangle!" << endl;
    
        x = pow(max, 2);
        y = pow(side1, 2) + pow(side2, 2);
        
        if (x == y) {
            cout << "It is also a right triangle with a hypotenuse of " << max << "." << endl;
        } else { 
            cout << "However, it isn't a right triangle so there is no hypotenuse. " << endl;
        }

    } else {
        cout << "It is not a triangle." << endl;
        
    }
    
    return 0;
}
