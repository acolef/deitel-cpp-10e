/* Calculates the area of a circle using an inline function.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double circleArea (double);

int main() {
    double r;
    
    cout << "Enter the radius: ";   cin >> r;
    cout << circleArea(r) << endl;
}

inline double circleArea (double r) {
    return 3.14159 * pow(r, 2);
}
