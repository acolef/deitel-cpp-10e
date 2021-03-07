/* This program prints four triangle patterns of asterisks, side-
 * by-side, by way of for loops and the conditional operator ?:.
 * One could circumvent using ?: by employing additional for loops
 * to control the blank spaces.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    for ( unsigned int i{1}; i <= 10; i++ ) {       // i controls the rows, j the columns
        for ( unsigned int j{1}; j <= 10; j++ ) {   // print across 10 columns
            cout << ( j <= i ? "*" : " " );         // if column <= row, print *; otherwise print a space
        }
        
        cout << "\t";                               // tab to next triangle

        for ( unsigned int j{10}; j >= 1; j-- ) {   // counting down from 10 for the columns
            cout << ( j >= i ? "*" : " " );         // if column >= row, print *; otherwise print a space
        }
        
        cout << "\t";                               // tab to next triangle

        for ( unsigned int j{1}; j <= 10; j++ ) {   // counting up from 1 for the columns
            cout << ( j >= i ? "*" : " " );         // if column >= row, print *; otherwise print a space
        }

        cout << "\t";                               // tab to next triangle
    
        for ( unsigned int j{10}; j >= 1; j-- ) {   // counting down from 10 for the columns
            cout << ( j > i ? " " : "*" );          // if column > row, print a blank space; otherwise print *
        }
        
        cout << "\n";                               // begin the next line
    }
}
