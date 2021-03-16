/* Simulates coin tossing.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();                                                 // Function prototype for flip

int main() {
    srand(static_cast<unsigned int>(time(0)));              // Seeds rand() with current time
    
    for ( unsigned int i{1} ; i <= 100 ; i++ ) {            // 100 coin flips
        cout << flip() << endl;                             // Calls flip to flip a coin
    }
}

int flip() {
    int coin;

    coin = rand() % 2;                                      // Scaling factor of 2 for 2 sides of a coin
    
    return coin;                                            // Returns flip result per iteration
}
