/* This program prints out a checkerboard pattern of asterisks
 * by employing while loops.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    unsigned int row{1};                                // Initialize row to 1
    
    while (row <= 8) {                                  // 8 rows
        unsigned int col{1};                            // Initialize col to 1 at the beginning of each loop
        
        while (col <= 16) {                             // 16 columns
            if (row % 2 == 1) {                         // If it's an odd row...
                cout << (col % 2 == 1 ? "*" : " ");     // Print * in odd columns and blanks in even columns
            }
            else {                                      // But if it's an even row...
                cout << (col % 2 == 0 ? "*" : " ");     // Print * in even columns and blanks in odd columns
            }
            
            ++col;                                      // Increment col by 1
        }
        
        cout << endl;                                   // Print newline at the end of a row
        ++row;                                          // Increment row by 1
    }
}
