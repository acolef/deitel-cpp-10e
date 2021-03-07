/* Prints a diamond shape made of asterisks using only for loops.
 * One could alternatively initialize row to 1 for the bottom half
 * and count up to 4, changing the continuation conditions accordingly.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    for ( int row{1} ; row <= 5 ; row++ ) {                 // For the top half
        for ( int blank{1} ; blank <= 5 - row ; blank++ ) 
            cout << " ";
        for ( int star{1} ; star <= 2 * row - 1 ; star++ )
            cout << "*";
        
            cout << endl;
            
    }
    
    for ( int row{4} ; row >= 1 ; row-- ) {                 // Bottom half
        for ( int blank{1} ; blank <= 5 - row ; blank++ )
            cout << " ";
        for ( int star{1} ; star <= 2 * row - 1 ; star++ )
            cout << "*";
            
            cout << endl;
    }
    
}
