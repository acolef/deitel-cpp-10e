/* Tests numerous <cmath> functions.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::endl;
using std::setw;
using std::setprecision;
using std::fixed;

int main() {
    // Ceiling function tests
    cout << "\t\tceil(x)"
        << "\nx\t" << "-42.7\t" << "-6.5\t" << "0.1\t" << "24.1"
        << "\nceil(x)\t" << ceil(-42.7) << "\t" << ceil(-6.5) << "\t" << ceil(0.1) << "\t" << ceil(24.1) 
        << endl;

    // Floor function tests
    cout << "\t\tfloor(x)"
        << "\nx\t" << "-42.7" << "\t" << "-6.5" << "\t" << "0.1" << "\t" << "24.1"
        << "\nfloor(x)" << floor(-42.7) << "\t" << floor(-6.5) << "\t" << floor(0.1) << "\t" << floor(24.1) 
        << endl;
        
    // Exponential function e^x tests
    cout << setprecision(1) << fixed;
    cout << "\t\texp(x)"
        << "\nx\t" << "-1" << "\t" << "0" << "\t" << "4" << "\t" << "10"
        << "\nexp(x)" << "\t" << exp(-1) << "\t" << exp(0) << "\t" << exp(4) << "\t" << exp(10)
        << endl;
        
    // Absolute value function tests
    cout << "\t\tfabs(x)"
        << "\nx\t" << "-3.43" << "\t" << "-1.0" << "\t" << "0.0" << "\t" << "100.0"
        << "\nfabs(x)" << "\t" << fabs(-3.43) << "\t" << "-1" << fabs(-1.0) << "\t" 
        << fabs(0.0) << "\t" << fabs(100.0)
        << endl;
        
    // Modulus function tests
    cout << "\t\t\tfmod(x,y)"
        << "\nx\t\t" << "4.5" << "\t" << "25" << "\t" << "-14" 
        << "\ny\t\t" << "1.25" << "\t" << "3" << "\t" << "7"
        << "\nfmod(x,y)\t" << fmod(4.5, 1.25) << "\t" << fmod(25, 3) << "\t" << fmod(-14, 7) 
        << endl; 
        
    // Natural log function tests
    cout << "\t\tlog(x)"
        << "\nx\t" << "50" << "\t" << "200" << "\t" << "500" << "\t" << "750" 
        << "\nlog(x)\t" << log(50) << "\t" << log(200) << "\t" << log(500) << "\t" << log(750)
        << endl;
        
    // log function tests
    cout << "\t\tlog10(x)"
        << "\nx\t" << "50" << "\t" << "200" << "\t" << "500" << "\t" << "1000" 
        << "\nlog10(x)" << log10(50) << "\t" << log10(200) << "\t" << log10(500) << "\t" << log10(1000)
        << endl;
        
    // Power function tests
    cout << "\t\tpow(x,y)"
        << "\nx\t" << "2" << "\t" << "4" << "\t" << "6" << "\t" << "8" 
        << "\ny\t" << "1" << "\t" << "2" << "\t" << "3" << "\t" << "4"
        << "\npow(x,y)" << pow(2,2) << "\t" << pow(4,2) << "\t" << pow(6,3) << "\t" << pow(8,4) 
        << endl;
        
    // Square root function tests
    cout << "\t\tsqrt(x)"
        << "\nx\t" << "2" << "\t" << "16" << "\t" << "100" << "\t" << "10000" 
        << "\nsqrt(x)\t" << sqrt(2) << "\t" << sqrt(16) << "\t" << sqrt(100) << "\t" << sqrt(10000)
        << endl;
        
    // Cosine function tests
    cout << "\t\tcos(x)"
        << "\nx\t" << "0.0" << "\t" << "pi/2" << "\t" << "pi" << "\t" << "3pi/2" 
        << "\ncos(x)\t" << cos(0.0) << "\t" << cos(3.14/2) << "\t" << cos(3.14) << "\t" << cos(3*3.14/2)
        << endl;
        
    // Sine function tests
    cout << "\t\tsin(x)"
        << "\nx\t" << "0.0" << "\t" << "pi/2" << "\t" << "pi" << "\t" << "3pi/2" 
        << "\nsin(x)\t" << sin(0.0) << "\t" << sin(3.14/2) << "\t" << sin(3.14) << "\t" << sin(3*3.14/2)
        << endl;
        
    // Tangent function tests
    cout << "\t\ttan(x)"
        << "\nx\t" << "0.0" << "\t" << "2" << "\t" << "4" << "\t" << "6" 
        << "\ntan(x)\t" << tan(0.0) << "\t" << tan(2) << "\t" << tan(4) << "\t" << tan(6)
        << endl;
}
