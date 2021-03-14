/* Determines whether a number in a stream of numbers is even.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

bool isEven(int);

int main() {
    int num;
    
    for ( unsigned int i{1} ; i <= 5 ; i++ ) {          // Accept five inputs
        cout << "Input an integer: ";   cin >> num;
        cout << boolalpha << isEven(num) << endl;       // Calls function isEven to return a boolean value
    }
}

bool isEven(int num) {
    return num % 2 == 0;                                // Performs the even check
}
