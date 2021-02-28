/* This program reads three non-zero integers and determines if
 * they could be the sides of a right triangle.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    
    cout << "Enter three integers: ";   cin >> a >> b >> c;
    
    if (a * a + b * b == c * c) {
        cout << "These are the sides of a right triangle.\n";
    }
    else {
        cout << "These are not the sides of a right triangle.\n";
    }
    
    return 0;
}
