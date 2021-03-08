/* A modification of Fig. 5.13 in the Deitel text. The program is
 * modified such that the break statement is replaced with a 
 * structured statement which achieves the same effect.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int count;
    bool broken{false};
    // While count <= 10 AND until broken = true, continue loop
    for ( count = 1; count <= 10 && !broken; count++ ) { 
        if (count == 4)
            broken = true;
        
        cout << count << " ";
    }
    
    cout << "\nBroke out of loop at count = " << count << endl;
}
