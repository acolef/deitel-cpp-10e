/* Calculates the distance between two points.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>

double dist(double, double, double, double);    // Function prototype for dist

int main() {
    double x1, x2, y1, y2;
    
    std::cout << "Input coordinates for point 1: ";    std::cin >> x1 >> y1;
    std::cout << "Input coordinates for point 2: ";    std::cin >> x2 >> y2;
    std::cout << "Distance between P1(" << x1 << "," << y1 << ") and P2(" << x2 << "," << y2 << ") = " 
        << dist(x1, y1, x2, y2) << std::endl;
}

double dist(double x1, double y1, double x2, double y2) {   // Function definition for dist
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));         // Return the distance 
}
