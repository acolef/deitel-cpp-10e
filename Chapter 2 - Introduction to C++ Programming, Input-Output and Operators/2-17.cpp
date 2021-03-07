/* Prints the numbers 1-4 in numerous ways, with adjacent 
 * numbers separated by a single space.
 *
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    cout << "1 2 3 4\n";                        //Print using one statement
    cout << "1 " << "2 " << "3 " << "4\n";      //Print using multiple stream insertion operators
    cout << "1 ";                               //Print using multiple statements
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";
    
    return 0;
}
