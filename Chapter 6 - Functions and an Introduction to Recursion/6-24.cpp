/* Prints out an integer input as a series of separate digits.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

void digit(int);                                            // function prototype

int main() {
    int num;
    
    cout << "Input a number 1 through 32767: ";     
    cin >> num;
    while ( num < 1 || num > 32767 ) {                      // Input validation
        cout << "Input a number 1 through 32767: "; 
        cin >> num;
    }
        
    digit(num);                                             // Call digit separation function
    cout << endl;
}

void digit(int num) {                                       // Digit separation function
    if ( num >= 10000 ) {
        cout << num / 10000 << "  ";                        // Print leftmost digit if num > 10000...
        num %= 10000;                                       // then get rid of leftmost digit
    }
    
    if ( num >= 1000 ) {                                   
        cout << num / 1000 << "  ";                         // Print leftmost digit if num > 1000...
        num %= 1000;                                        // then get rid of leftmost digit, and so on
    }
    
    if ( num >= 100 ) {
        cout << num / 100 << "  ";
        num %= 100;
    }
    
    if ( num >= 10 ) {
        cout << num / 10 << "  ";
        num %= 10;
    }
    
    if ( num >= 1 )                                        
        cout << num / 1;                                    // Only need num / 1 for ones place
}
