/* This program prints four triangle patterns comprised of asterisks
 * by employing for loops.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    for ( unsigned int i{1}; i <= 10; i++ ) {       // i index controls the rows, printing a newline after j loop
        for ( unsigned int j{1}; j <= i; j++ ) {    // j index controls the asterisks; if j > i, stop looping
            cout << "*";
        }
        
        cout << "\n";                               // new row
    }
    
    cout << "\n";                                   // newline character between triangle patterns
    
    for ( unsigned int i{1}; i <= 10; i++ ) {       // i loop for the rows again
        for ( unsigned int j{10}; j >= i; j-- ) {   // decrementing j from 10 this time; if j < i, stop looping
            cout << "*";
        }
        
        cout << "\n";                               // new row
    }
    
    cout << "\n";                                   // newline character between triangle patterns
    
    for ( unsigned int i{1}; i <= 10; i++ ) {       // i for the rows
        for ( unsigned int j{1}; j <= 10; j++ ) {   // j no longer depends upon i; we need 10 characters printed
            if ( j < i ) {                          // when j < i, print a blank space
                cout << " ";
            }
            else {                                  // when j >= i, print an asterisk
                cout << "*";
            }
        }

        cout << "\n";                               // new row
    }
    
    cout << "\n";                                   // newline character between triangle patterns
    
    for ( unsigned int i{1}; i <= 10; i++ ) {       // i for the rows
        for ( unsigned int j{10}; j >= 1; j-- ) {   // j again is independent of i
            if ( j > i ) {                          // if j > i, print a blank space
                cout << " ";
            }
            else {                                  // otherwise, when j <= i, print an asterisk
                cout << "*";
            }
        }
        
        cout << "\n";                               // new row
    }
}
