/* Finds the smallest number entered by the user. The program also
 * reads from input the number of numbers to be entered.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int smallest, value;
    
    cout << "Enter how many numbers input: ";   cin >> n;
    cout << "Enter the first number: ";        cin >> value;
    smallest = value;
    
    for ( unsigned int count{2}; count <= n; count++ ) {
        cout << "Enter the next number: ";     cin >> value;
        
        if (value < smallest) {
            smallest = value;
        }
    }
    
    cout << "The smallest was " << smallest << endl;
}
