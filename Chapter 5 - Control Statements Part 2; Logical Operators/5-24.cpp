/* A modification of 5-23.cpp, allowing the user to input an odd
 * number 1-19 to specify the rows of the diamond shape.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    int input;
    
    cout << "Input an odd number 1-19: ";   cin >> input;
    
    while (input < 1 || input > 19 || input % 2 != 1) {     // Validity checking for the input
        cout << "Input an odd number 1-19: ";   
        cin >> input;
    }
    
    for ( int row{1} ; row <= input - 2 ; row += 2 ) {              // For the top half, excluding middle piece
        for ( int blank{(input - row) / 2} ; blank > 0 ; blank-- ) 
            cout << " ";
        for ( int star{1} ; star <= row ; star++ )
            cout << "*";
        
            cout << endl;
            
    }
    
    for ( int row{input} ; row >= 1 ; row -= 2 ) {                  // Bottom half, including middle piece
        for ( int blank{1} ; blank <= (input - row) / 2 ; blank++ )
            cout << " ";
        for ( int star{1} ; star <= row ; star++ )
            cout << "*";
            
            cout << endl;
    }
    
}
