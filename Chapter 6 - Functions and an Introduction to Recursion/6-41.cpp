/* Recursively finds the GCD of two integers.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>

int gcd(int x, int y);

int main() {
    int x, y;
    
    std::cout << "Input x and y respectively, x > y: ";  std::cin >> x >> y;
    std::cout << "GCD = " << gcd(x, y) << std::endl;
}

int gcd(int x, int y) {
    if ( y == 0 )
        return x;                       // Return x's value if y's value == 0
    else {
        return gcd(y, x % y);           // Pass y's value to x, and pass x % y's value to y
    }
}
