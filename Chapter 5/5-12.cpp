/* This program calculates the product of the odd integers from
 * 1 to 15.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream> 
using namespace std;

int main() {
    int product{1};
    
    for ( unsigned int i{1}; i <= 15; i += 2 ) {
        product *= i;
    }
    
    cout << product << endl;
}
