/* Tests for the famous De Morgan's laws of logic. The tests
 * demonstrate the logical equivalence for statements generated
 * by employing the laws.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    int x{1}, y{8};
    // part a
    cout << (!(x < 5) && !(y >= 7));                // F && F -> F
    cout << " " << !((x < 5) || (y >= 7)) << endl;  // !T -> F
    
    // part b
    int a{1}, b{1}, g{5};
    cout << (!(a == b) || !(g != 5));               // F || T -> T
    cout << " " << !((a == b) && (g != 5)) << endl; // !F -> T
    
    // part c
    cout << !((x <= 8) && (y > 4));                 // !T -> F
    cout << " " << (!(x <= 8) || !(y > 4)) << endl; // F || F -> F
    
    // part d
    int i{3}, j{8};
    cout << !((i > 4) || (j <= 6));                 // !F -> T
    cout << " " << (!(i > 4) && !(j <= 6)) << endl; // T && T -> T
}
