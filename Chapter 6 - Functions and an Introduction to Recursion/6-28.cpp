/* Finds perfect numbers < 1000. There are only 3. (See 6-28.txt.)
 * 
 * Author: Alex Cole Foster
 */


#include <iostream>
using namespace std;

bool isPerfect(const int);                              // Function prototype for isPerfect

int main() {
    for ( unsigned int i{1} ; i <= 1000 ; i++ ) {       // Count up to 1,000
        if ( isPerfect(i) == true )                     // Call function isPerfect to check if number is perfect
            cout << i << " is perfect" << endl;         // Print affirmative message if it is
    }
}

bool isPerfect(const int number) {
    int count{1}, sum{0};                               // Each time isPerfect is called, reinitialize variables
    
    cout << number << ": ";
    
    while ( count < number ) {                          // While loop to test all of number's divisors
        
        if ( number % count == 0 ) {                    // If remainder is zero
            sum += count;                               // then add count to summation variable
            cout << count << " ";                       // Print a space for readability
        }
        
        count++;
    }
    
    cout << "\n";                                       // Print newline character when done with checks
    
    if ( sum == number )                                // If sum of divisors equals number
        return true;                                    // then number is perfect
    else 
        return false;                                   // Otherwise, it is imperfect
}
