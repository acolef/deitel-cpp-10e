/* This program prints a square made of asterisks based on a size
 * parameter that the user inputs. It works for all sizes from 1
 * to 20. The program iterates through both rows and columns by way 
 * of nested while loops.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int size, row{1};      // A third variable, col, is initialized below in a while loop
    
    cout << "Select a size (1-20) for the square: ";    cin >> size;    // Set square size to input value
    
    if (size < 1) {                                 // Validation check: establish minimum (1) size value
        cout << "Setting size to 1...\n";
        size = 1;
    }
    else if (size > 20) {                           // Establish maximum (20) size value
        cout << "Setting size to 20...\n";
        size = 20;
    }
    
    while (row <= size) {                       // Outermost loop iterates through the rows
        unsigned int col{1};                    // This variable gets set back to 1 for each loop through the rows
        
        while (col <= size) {                   // Innermost loop iterates through the columns
            if (row == 1) {                     // If cursor is anywhere at the top of the square...
                cout << "*";                    // ...print an asterisk
            }
            else if (row == size) {             // If cursor is anywhere at the bottom of the square...
                cout << "*";                    // ... print an asterisk
            }
            else if (col == 1) {                // If the cursor is anywhere along the left side of the square...
                cout << "*";
            }
            else if (col == size) {             // If the cursor is anywhere along the right side of the square...
                cout << "*";
            }
            else {                              // If NONE of the conditions above are met, print a blank
                cout << " ";
            }
            
            ++col;                              // Now increment the column (move to the right by 1)
        }
        
        cout << "\n";                           // After the whole row has been completed, print a newline...
        ++ row;                                 // and increment the row counter by 1 (move down by 1)
    }
    
    return 0;
}
