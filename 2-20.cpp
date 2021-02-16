/* Given the radius of a circle, this program will determine the circle's
 * diameter, circumference, and area. We are asked to do all calculations
 * as part of the output statements, so we need not declare variables for
 * the diameter, circumference, or area.
 *
 * Author: Alex Cole Foster 
 */

#include <iostream>
using namespace std;

int main(){
    int radius{0};          //Declare and initialize radius variable to 0
    
    cout << "Input the radius of the circle: ";     cin >> radius;  //Prompt user for and accept input of radius
    
    cout << "Diameter: " << 2 * radius << endl;         //Output results
    cout << "Circumference: " << 2 * 3.14159 * radius << endl;
    cout << "Area: " << 3.14159 * radius * radius << endl;
    
    return 0;
}

