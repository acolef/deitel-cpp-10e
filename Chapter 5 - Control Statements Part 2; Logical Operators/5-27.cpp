/* A modification of Fig. 5.14 in the Deitel text. The program is
 * modified such that the continue statement is replaced with a 
 * structured statement which achieves the same effect.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    for ( unsigned int count{1} ; count <= 10; count++ ) {
        if (count == 5) {
            count++;
        }
        
        cout << count << " ";
    }
    
    cout << "\nSkipped printing 5 using a structured statement" << endl;
}
