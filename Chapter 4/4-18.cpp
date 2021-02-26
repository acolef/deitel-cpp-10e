/* A program designed to output a table of values based on the values
 * stored in a variable N.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>

using namespace std;

int main() {
    int n, counter{1};                  // No need to initialize n, it'll get set soon
    
    cout << "N\t10*N\t100*N\t1000*N\n"; // Print the header
    
    while (counter <= 5) {
        n = counter;                    // Let n = counter for each iteration of the loop
        cout << n << "\t" << 10*n << "\t" << 100*n << "\t" << 1000*n << endl;   // Print the computations
        ++counter;                      // Add 1 to counter and start over, unless counter > 5
    }
    
    return 0;
}
